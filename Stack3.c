#include<stdio.h>
int stack[100];
int top=-1;

void peek(){
    if(top == -1){
        printf("Stack is underflow");
    }
    else{
        printf("Top element is: %d",stack[top]);
    }
    printf("\n");
}
int main(){
    stack[++top]=10;
    stack[++top]=20;

    peek();
    peek();

    return 0;
}