#include <stdio.h>
#include <stdlib.h>

struct queue {   
    int f;
    int r;
    int size;
    int* arr;
};

// Check if the queue is empty
int isEmpty(struct queue *q) {
    if (q->r == q->f) {
        return 1;
    }
    return 0;
}

// Check if the queue is full
int isFull(struct queue *q) {
    if (q->r == q->size - 1) {
        return 1;
    }
    return 0;
}

// Dequeue an element from the queue
int dequeue(struct queue *q) {
    int a = -1;
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

// Enqueue an element into the queue
void enqueue(struct queue *q, int val) {
    if (isFull(q)) {
        printf("Queue is full\n");
    } else {
        q->r++;
        q->arr[q->r] = val;
    }printf("Enqueued %d \n",val);
}

int main() {
    struct queue q;    
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int*)malloc(q.size * sizeof(int));

    // Enqueue a few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    
    // Dequeue the elements
    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Dequeued element: %d\n", dequeue(&q));

    free(q.arr);  // Don't forget to free the dynamically allocated memory
    return 0;
}
