#include<stdio.h>

void read_array(int *array, int n){
    printf("enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
}

void print_array(int *array , int n){
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void find_small(int *array, int n, int *small, int *pos){
    for(int i=0;i<n;i++){
        if(*small>array[i]){
            *small=array[i];
            *pos=i;
        }
    }
    printf("the smallest element in the array is %d at position %d\n",*small,*pos);
}

int main(){
    int n,pos=0;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    read_array(arr,n);
    print_array(arr,n);
    find_small(arr,n,&arr[0],&pos);
    return 0;
}