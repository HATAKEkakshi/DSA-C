#include <stdio.h>
#define MAX_SIZE 3

int top = -1;
int stack[MAX_SIZE];

// Push function
void push(int value) {
    if(top == MAX_SIZE - 1) {
        printf("Stack Overflow! Cannot push %d into the stack.\n", value);
        return;
    } else {
        stack[++top] = value;
        printf("Pushed %d to stack.\n", value);
    }
}

// Pop function
int pop() {
    int value;
    if(top == -1) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return -1; // Return -1 when stack underflows
    } else {
        value = stack[top--];
        printf("Popped element: %d\n", value);
        return value;
    }
}

// Display function
void display() {
    int i;
    if(top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements are: ");
    for(i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(1);
    push(2);
    push(3);
    
    // This will cause a stack overflow
    push(6);
    
    display();
    
    pop();
    pop();
    pop();
    
    // This will cause a stack underflow
    pop();
    
    display();
    
    return 0;
}
