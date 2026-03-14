#include <stdio.h>
#include <stdlib.h>

// Definition of node
struct Node {
    int data;
    struct Node *next;
};

// Insert node at kth position
struct Node* insertAtK(struct Node *head, int data, int k) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // Case 1: Insert at beginning
    if (k == 1) {
        newNode->next = head;
        return newNode;
    }

    struct Node *temp = head;

    // Traverse to (k-1)th node
    for (int i = 1; i < k - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // Invalid position
    if (temp == NULL) {
        printf("Invalid position\n");
        free(newNode);
        return head;
    }

    // Insert node
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// Display linked list
void display(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Driver code
int main() {
    struct Node *head = NULL;

    // Create initial list: 10 -> 20 -> 30
    head = insertAtK(head, 10, 1);
    head = insertAtK(head, 20, 2);
    head = insertAtK(head, 30, 3);

    printf("Original List:\n");
    display(head);

    // Insert 25 at position 3
    head = insertAtK(head, 25, 3);

    printf("After inserting 25 at position 3:\n");
    display(head);

    return 0;
}
