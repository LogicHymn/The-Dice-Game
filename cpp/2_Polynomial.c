#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int coeff;
    int exp;
    struct Node *next;
};

// Create a new node
struct Node* createNode(int c, int e) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = c;
    newNode->exp = e;
    newNode->next = NULL;
    return newNode;
}

// Insert term at end
struct Node* insertEnd(struct Node *head, int c, int e) {
    struct Node *newNode = createNode(c, e);

    if (head == NULL)
        return newNode;

    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Add two polynomials
struct Node* addPoly(struct Node *p1, struct Node *p2) {
    struct Node *result = NULL;

    while (p1 != NULL && p2 != NULL) {
        if (p1->exp == p2->exp) {
            result = insertEnd(result, p1->coeff + p2->coeff, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->exp > p2->exp) {
            result = insertEnd(result, p1->coeff, p1->exp);
            p1 = p1->next;
        }
        else {
            result = insertEnd(result, p2->coeff, p2->exp);
            p2 = p2->next;
        }
    }

    // Remaining terms
    while (p1 != NULL) {
        result = insertEnd(result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    while (p2 != NULL) {
        result = insertEnd(result, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    return result;
}

// Display polynomial
void display(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->exp);
        if (temp->next != NULL)
            printf(" + ");
        temp = temp->next;
    }
    printf("\n");
}

// Driver code
int main() {
    struct Node *p1 = NULL, *p2 = NULL, *p3 = NULL;

    // Polynomial 1: 5x^3 + 4x^2 + 2
    p1 = insertEnd(p1, 5, 3);
    p1 = insertEnd(p1, 4, 2);
    p1 = insertEnd(p1, 2, 0);

    // Polynomial 2: 3x^3 + 2x + 1
    p2 = insertEnd(p2, 3, 3);
    p2 = insertEnd(p2, 2, 1);
    p2 = insertEnd(p2, 1, 0);

    printf("Polynomial 1: ");
    display(p1);

    printf("Polynomial 2: ");
    display(p2);

    p3 = addPoly(p1, p2);

    printf("Resultant Polynomial: ");
    display(p3);

    return 0;
}
