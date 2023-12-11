#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node {
    int data;
    struct Node *next;
};
struct Node *createLinkedList();

struct Node *insertAtBeginning(struct Node *head, int data);

struct Node *searchElement(struct Node *head, int data);

void displayLinkedList(struct Node *head);

void freeLinkedList(struct Node *head);

#endif