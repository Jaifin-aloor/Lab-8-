#include <stdio.h>

void StringCopy(char* dest, const char* source){
    while(*source!='\0'){
        *dest=*source;
        dest++;;
        source++;
    }
    *dest='\0';
}

int main(){
    char src[] = "hello!";
    char dest[10];
    StringCopy(dest,src);
    return 0;
}