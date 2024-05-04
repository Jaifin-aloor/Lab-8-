#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));
    if(arr=NULL){
        printf("memory allocation failed\n");
        return 1;
    }
    printf("enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the elements in the array are: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}