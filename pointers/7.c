#include <stdio.h>

int main(){
    char arr[]="social network";
    char *p = &arr[0];
    for(int i=0;*(p+i)!='\0';i++){
        printf("%c",*(p+i));
    }
    printf("\n");
    return 0;
}