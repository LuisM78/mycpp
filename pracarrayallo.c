#include <stdio.h>
#include <stdlib.h>

    int n = 5;
    int* arr;


int main(){
    arr = (int*)malloc(n*sizeof(int));
    for(int i =0;i<n;i++){
        arr[i]=i;
    }

    for (int i =0; i <n; i++){
        printf("for index i= %d arr[i] is %d \n",i,arr[i]);
    }
    free(arr);
    return 0;

}

