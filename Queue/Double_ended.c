#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

void enqueue_r();
void dequeue_r();
void display();
void enqueue_f();
void dequeue_f();

int front = -1;
int rear = -1;
int q[SIZE];

int main() {
    int n;
    printf("\n1 for enqueue from rear\n2 for dequeue from rear\n3 for display\n4 for enqueue from front\n5 for dequeue from front\n6 for exit from program\n");

    while (1) {
        printf("Enter choice: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                enqueue_r();
                break;
            case 2:
                dequeue_r();
                break;
            case 3:
                display();
                break;
            case 4:
                enqueue_f();
                break;
            case 5:
                dequeue_f();
                break;
            case 6:
                exit(0);
            default:
                printf("You entered wrong choice\n");
        }
    }
    return 0;
}

void enqueue_r() {
    int data;
    printf("Enter data you want to insert: ");
    scanf("%d", &data);

    if ((front == 0 && rear == SIZE-1) || (front == rear + 1)) {
        printf("Deque is full\n");
        return;
    }

    if (front == -1) {  // Empty deque
        front = rear = 0;
    } else if (rear == SIZE-1 && front != 0) {
        rear = 0;
    } else {
        rear++;
    }
    q[rear] = data;
}

void dequeue_r() {
    if (front == -1) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted item = %d\n", q[rear]);

    if (front == rear) {  // Single element condition
        front = rear = -1;
    } else if (rear == 0) {
        rear = SIZE - 1;
    } else {
        rear--;
    }
}

void display() {
    if (front == -1) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deque elements: ");
    if (rear >= front) {
        for (int i = front; i <= rear; i++)
            printf("%d ", q[i]);
    } else {
        for (int i = front; i < SIZE; i++)
            printf("%d ", q[i]);
        for (int i = 0; i <= rear; i++)
            printf("%d ", q[i]);
    }
    printf("\n");
}

void enqueue_f() {
    int data;
    printf("Enter data you want to insert: ");
    scanf("%d", &data);

    if ((front == 0 && rear == SIZE-1) || (front == rear + 1)) {
        printf("Deque is full\n");
        return;
    }

    if (front == -1) {  // Empty deque
        front = rear = 0;
    } else if (front == 0) {
        front = SIZE - 1;
    } else {
        front--;
    }
    q[front] = data;
}

void dequeue_f() {
    if (front == -1) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted item = %d\n", q[front]);

    if (front == rear) {  // Single element condition
        front = rear = -1;
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
}