#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node {
    char name[50];
    char phone[15];
    struct Node* next;
} Node;


typedef struct LinkedList {
    Node* head;
} LinkedList;


Node* createNode(char* name, char* phone) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->name, name);
    strcpy(newNode->phone, phone);
    newNode->next = NULL;
    return newNode;
}


void initializeList(LinkedList* list) {
    list->head = NULL;
}


void addContact(LinkedList* list, char* name, char* phone) {
    Node* newNode = createNode(name, phone);
    if (list->head == NULL) {
        list->head = newNode;
    } else {
        Node* temp = list->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


void displayContacts(LinkedList* list) {
    Node* temp = list->head;
    while (temp != NULL) {
        printf("Name: %s, Phone: %s\n", temp->name, temp->phone);
        temp = temp->next;
    }
}

int main() {
    LinkedList contactList;


    initializeList(&contactList);


    addContact(&contactList, "John Doe", "123-456-7890");
    addContact(&contactList, "Jane Smith", "987-654-3210");
    addContact(&contactList, "Alice Johnson", "555-666-7777");


    displayContacts(&contactList);

    return 0;
}

