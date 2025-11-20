#include<stdio.h>
#define MAX 5

int CQ[MAX];
int front = -1, rear = -1;
void enqueue(int x){
    int newR = (rear+1)% MAX;

    if (newR == front){
        printf("Queue is full\n");
        return;
    }
    rear = newR;

    CQ[rear] = x;
    printf("%d inserted\n",x);

    if(front==-1){
        front=0;
    }
}

void dequeue(){
    if(front == -1){
        printf("Queue underflow\n");
        return;
    }

    int y = CQ[front];
    printf("Element deleted: %d\n",y);

    if(front == rear){
        front = rear = -1;
    }else{
        front = (front+1) % MAX;
    }
}

void display(){
    if(front == -1){
        printf("Queue is empty\n");
        return;
    }

     printf("Circular Queue elements:\n");

     int i = front;
     while(1){
        printf("%d\n",CQ[i]);
        if(i == rear)
            break;
        i = (i+1) % MAX ;
      }
      printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    dequeue();

    display();

    return;
}