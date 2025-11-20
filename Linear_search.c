#include<stdio.h>
int main(){
 int arr[]={2,4,5,9,8};
 int size = sizeof(arr)/sizeof(arr[0]);
 int target = 2;
 int n;

 for(int i=0; i<n; i++){
    if(arr[i]==target){
        printf("Element found at position: %d",i);
        return 0;
    }
 }
 printf("Elements not found");
 return 0;
}