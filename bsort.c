#include <stdio.h>

void Bubblesort(int arr[],int n){
    int i, j, temp;
    for (i=0; i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if (arr[j] > arr[j+1]){
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}

void printarray(int arr[],int size){
    int i =0;
    for(i;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {190,4,91,14,40,0,3};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    printf("array before sorted ");
    printarray(arr,size);
    Bubblesort(arr,size);
    printf("array after sorted ");
    printarray(arr,size);
    return 0;

}