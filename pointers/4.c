#include <stdio.h>

void input(int *small, int *medium, int *large){
    int arr[3]={*small,*medium,*large};
    for(int j=0;j<3;j++){
        for(int i=0;i<3-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    *small = arr[0];
    *medium = arr[1];
    *large = arr[2];
    printf("small = %d; medium = %d; large = %d\n",arr[0],arr[1],arr[2]);
}

int main(){
    int a=5,b=6,c=4;
    input(&a,&b,&c);
    return 0;
}