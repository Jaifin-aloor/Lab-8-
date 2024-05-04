#include <stdio.h>

void StringCat( char *dest, char *src){
    while(*dest!='\0'){
        dest++;
    }
    while(*src!='\0'){
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}

int main(){
    char dest[20]="Hello ";
    char src[]="world!";
    StringCat(dest,src);
    printf("concatenated string = %s\n",dest);
    return 0;
}