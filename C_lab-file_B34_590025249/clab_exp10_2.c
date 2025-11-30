//Write a program to insert item in middle of the linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to display linked list
void display(struct Node* head) {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int n, i, value, pos;
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Creating initial linked list
    for(i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &value);

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    display(head);

    // Insert in middle
    printf("Enter position to insert new node (1-based index): ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    temp = head;
    for(i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL) {
        printf("Position out of bounds!\n");
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("Linked List after insertion: ");
    display(head);

    return 0;
}
