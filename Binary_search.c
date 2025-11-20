#include<stdio.h>

int binarySearch(int arr[],int size,int target){
    int low =0 ;
    int high =size -1;

    while(low<=high){
        int mid = (low + high)/2;

        if(arr[mid] == target)return mid;
        else if(arr[mid]<target) low = mid + 1;
        else high = mid - 1;
    }
return -1;
}
int main(){
    int arr[] = {2,5,7,3,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 7;

    int result = binarySearch(arr,size,target);

    if(result != -1){
        printf("Element found at index: %d",result);
    }
    else{
        printf("Element not found");
    }
    return 0;
}