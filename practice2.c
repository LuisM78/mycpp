#include <stdio.h>

void bsort(int arr[], int size){
    int i,j,temp;
    i = 0;
    for(i=0;i<size;i++){
        for(j=0;j<size-i-1;j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[],int size){
    int i;
    i = 0;
    for(i;i<size-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {-49,-100,4,24,2,0,294,1};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    printf("arry before sort \n");
    printArray(arr,size);
    bsort(arr,size);
    printf("array after sorted \n");
    printArray(arr,size);
    
    return 0;
}