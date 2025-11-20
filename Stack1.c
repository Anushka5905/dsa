#include<stdio.h>
int stack[100];
int top = -1;

void push(int value){
    if(top==99){
        printf("Stack is overflow");
    }
    else{
        top++ ;
        stack[top]=value;
        printf("%d push to stack",value);
    }
    printf("\n");
}
int main(){
    push(5);
    push(10);

    return 0;
}