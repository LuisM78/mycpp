#include <stdio.h>

int findmax(int arr[], int size){
    int max=arr[0];
    int i;
    for(i=1;i<size;i++) {
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[]={4,48,818,0,-49};
    int max ;
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    max = findmax(arr,size);
    printf("The value of max is %d \n",max);
    return 0;
}