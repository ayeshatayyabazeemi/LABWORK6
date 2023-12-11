#include "linkedlist.h"

int main() {
    struct Node *list = createLinkedList();
    list = insertAtBeginning(list, 5);
    list = insertAtBeginning(list, 10);
    displayLinkedList(list);

    struct Node *searchResult = searchElement(list, 20);
   
    freeLinkedList(list);

    return 0;
}