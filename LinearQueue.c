#include<stdio.h>
#define MAX 50

void enqueue();
void dequeue();
void display();

int queue[MAX];
int rear = -1;
int front = -1;

int main(){
    int choice;
    while(1){
        printf("1.Insert element to queue\n");
        printf("2.Delete element from queue\n");
        printf("3.Display the element of queue:\n");
        printf("4.Quit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            enqueue(); 
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            case 4:
            return 0;
            default:
            printf("Invalid Choice!\n");
        }
    }
}


void enqueue(){
    int n;
    printf("Enter the element in queue: ");
    scanf("%d",&n);

    if(rear==MAX-1){
        printf("Queue is full");
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear += 1;
    queue[rear] = n;
    printf("Element inserted:%d\n",n);
}

void dequeue(){
    if(front==-1){
        printf("Queue is empty");
        return;
    }
    int y = queue[front];
    printf("Element deleted from queue:%d",y);
    if(front==rear){
        front = rear = -1;
    }
    else{
        front += 1;
    }
}

void display(){
    if(front== -1){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are: \n");
    for(int i = front; i<= rear; i++){
        printf("%d\n",queue[i]);
    }
}