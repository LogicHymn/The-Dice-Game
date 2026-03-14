#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

// Insert at end
struct Node* insertAtEnd(struct Node *head, int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }

    newNode->data = data;
    newNode->next = NULL;

    // If list is empty
    if (head == NULL) {
        return newNode;
    }

    struct Node *temp = head;

    // Traverse to last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link last node to new node
    temp->next = newNode;

    return head;
}

// Display list
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

    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    printf("Linked List after insertion at end:\n");
    display(head);

    return 0;
}
