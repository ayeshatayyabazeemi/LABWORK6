#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>



struct Node *createLinkedList() {
    return NULL;
}

 struct Node *insertAtBeginning(struct Node *head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    newNode->data = data;
    newNode->next = head;

    return newNode;
}
struct Node *searchElement(struct Node *head, int data) {
    struct Node *current = head;

    while (current != NULL) {
        if (current->data == data) {
            return current;
        }
        current = current->next;
    }

    return NULL;
}

void displayLinkedList(struct Node *head) {
    struct Node *current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

void freeLinkedList(struct Node *head) {
    struct Node *current = head;
    struct Node *nextNode;

    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
}
