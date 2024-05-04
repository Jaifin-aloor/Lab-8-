#include <stdio.h>

void print(char *x){
    for(int i=0;*(x+i)!='\0';i++){
        printf("%c",*(x+i));
    }
}

int main(){
    char arr[]="hello world!!";
    char *p = &arr[0];
    print(p);
    printf("\n");
    return 0;
}