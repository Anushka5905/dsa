#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (!newNode) {
        printf("Memory allocation error\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
    printf("Inserted %d at the beginning\n", data);
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        printf("Inserted %d at the end\n", data);
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    printf("Inserted %d at the end\n", data);
}

void insertInOrder(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL || (*head)->data >= data) {
        newNode->next = *head;
        *head = newNode;
        printf("Inserted %d in order\n", data);
        return;
    }

    struct Node* current = *head;
    while (current->next != NULL && current->next->data < data) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
    printf("Inserted %d in order\n", data);
}

void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data;

    do {
        printf("\n--- Linked List Operations ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert in Order\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert at beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 2:
                printf("Enter data to insert at end: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 3:
                printf("Enter data to insert in order: ");
                scanf("%d", &data);
                insertInOrder(&head, data);
                break;
            case 4:
                printf("Linked List: ");
                displayList(head);
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}







/*
Step 1: if A == NULL
            write("A Stack overflow")
            return (First)
Step 2: New: A;
step 3: A = Link(A);
step 4: Info(New) = x;
step 5: Link(New)=first;
            return (New);
*/



/*
Step 1: if a=null then
               write("A stack underflow")
               return;
        new = a
        info(new)=x
        link(new)=null
        save =first
        repeat while(save != null){
                write (info(save))
                save = link(save)
        }
        link(save)=new;
        return;
step 2: stop

*/


/*
Step 1: Start
Step 2: if a= null then
            write ("A Stack underflow")
            return(first);
        New = A
        A = Link(A)
        Info(New)=x;
           link(new)=null
        if first = null
           link(new)=null
           return(new);

        if info(new)<= info(first) then
             link(new)=first
             return(new)
        Save = first
        Repeat while(Save != Null) && (Info(link(save)))<=Info(new)
           save = link(save);
        Link(new) = link(save)
        link(save)=new
        return(first)
Step 3: Stop
*/