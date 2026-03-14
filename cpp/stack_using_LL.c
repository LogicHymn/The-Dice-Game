#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int x) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Heap Overflow\n");
        return;
    }
    newNode->data = x;
    newNode->next = top;
    top = newNode;
    printf("%d pushed into stack\n", x);
}

void pop() {
    if (top == NULL) {
        printf("Stack Underflow\n");
    } else {
        struct node *temp = top;
        printf("%d popped from stack\n", temp->data);
        top = top->next;
        free(temp);
    }
}

void peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", top->data);
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    peek();
    pop();
    peek();
    return 0;
}
