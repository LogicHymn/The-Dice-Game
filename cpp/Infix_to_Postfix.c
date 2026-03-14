#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

/* Function to push into stack */
void push(char x) {
    stack[++top] = x;
}

/* Function to pop from stack */
char pop() {
    return stack[top--];
}

/* Function to return precedence */
int precedence(char x) {
    if (x == '^')
        return 3;
    if (x == '*' || x == '/')
        return 2;
    if (x == '+' || x == '-')
        return 1;
    return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    int i = 0, j = 0;
    char ch;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    while (infix[i] != '\0') {
        ch = infix[i];

        /* If operand, add to postfix */
        if (isalnum(ch)) {
            postfix[j++] = ch;
        }
        /* If left parenthesis, push */
        else if (ch == '(') {
            push(ch);
        }
        /* If right parenthesis, pop until '(' */
        else if (ch == ')') {
            while (stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop();  // remove '('
        }
        /* If operator */
        else {
            while (top != -1 && precedence(stack[top]) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        }
        i++;
    }

    /* Pop remaining operators */
    while (top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix expression: %s", postfix);

    return 0;
}
