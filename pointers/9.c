#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6};
    int *p = &arr[0];
    printf("%p\n",p++);
    printf("%p\n",p);
    return 0;
}