#include <stdio.h>

int main(){
    int x;
    int *ip;

    ip = &x;

    printf("enter a number: ");
    scanf("%d",ip);

    *ip = 30;

    printf("x = %d\n",x);

    x=23;
    printf("*ip = %d\n",*ip);

    return 0;
}