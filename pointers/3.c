#include <stdio.h>

void charswap(char *x, char *y){
    printf("original: %c, %c\n",*x,*y);
    char temp = *x;
    *x = *y;
    *y = temp;
    printf("swapped: %c, %c\n",*x,*y);
}

int main(){
    char a1 = 'a',a2='b';
    charswap(&a1,&a2);
    return 0;
}