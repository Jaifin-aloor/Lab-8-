#include<stdio.h>  
int main()    
{    
    int a=10;
    int *b;  
    b= &a; 
    printf(" \n a=%d\t b=%ls\t  *b=%d\n",a,&a,*b);
}    