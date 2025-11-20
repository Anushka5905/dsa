#include<stdio.h>
int stack[100];
int top = -1;

void pop(){
    if(top == -1){
        printf("Stack is underflow");
    }
    else{
        int value = stack[top];
        top --;
        printf("%d popped from stack",value);
        
    }
    printf("\n");
}
int main(){
    stack[++top]= 10;
    stack[++top]= 20;
    stack[++top]= 30;

    pop();
    pop();
    pop();

    return 0;
}