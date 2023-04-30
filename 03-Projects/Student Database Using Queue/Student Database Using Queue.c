#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
    float gpa;
    struct Student *next;
};

struct Queue {
    struct Student *front;
    struct Student *rear;
};

void initQueue(struct Queue *q) {
    q->front = NULL;
    q->rear = NULL;
}

int isQueueEmpty(struct Queue *q) {
    return q->front == NULL;
}

void enqueue(struct Queue *q, char *name, int age, float gpa) {
    struct Student *newStudent = malloc(sizeof(struct Student));
    if (newStudent == NULL) {
        printf("Error: Out of memory\n");
        return;
    }
    strncpy(newStudent->name, name, MAX_NAME_LENGTH - 1);
    newStudent->age = age;
    newStudent->gpa = gpa;
    newStudent->next = NULL;
    if (isQueueEmpty(q)) {
        q->front = newStudent;
        q->rear = newStudent;
    } else {
        q->rear->next = newStudent;
        q->rear = newStudent;
    }
}

void dequeue(struct Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Error: Queue is empty\n");
        return;
    }
    struct Student *temp = q->front;
    q->front = q->front->next;
    free(temp);
}

void printQueue(struct Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Student database:\n");
    struct Student *temp = q->front;
    while (temp != NULL) {
        printf("%s, %d, %.2f\n", temp->name, temp->age, temp->gpa);
        temp = temp->next;
    }
}

int main() {
    struct Queue q;
    initQueue(&q);

    enqueue(&q, "John", 20, 3.4);
    enqueue(&q, "Mary", 19, 3.8);
    enqueue(&q, "Bob", 21, 2.9);
    printQueue(&q);

    dequeue(&q);
    printQueue(&q);

    return 0;
}
