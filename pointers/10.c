#include <stdio.h>

int main(){
    char s1[5]="AAA",s2[5],*s;
    s=&s2[5];
    *s='s';
    for(int i=0;i<5;i++){
        printf("%c",s1[i]);
    }
    printf("\n");
    return 0;
}