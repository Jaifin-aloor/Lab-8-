#include <stdio.h>

void readMatrix(int x, int y,int z, int matrix[][y][z]){
    printf("enter the elements of the 3D array: ");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                scanf("%d",&matrix[i][j][k]);
            }
        }
    }
    
}

void dispMatrix( int x, int y,int z, int matrix[][y][z]){
    printf("the elements of the 3D array are : \n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                printf("%d ",matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}

int main(){
    int x,y,z;
    printf("enter the number of rows and cols in the matrix: ");
    scanf("%d%d%d",&x,&y,&z);
    int mat[x][y][z];
    readMatrix(x,y,z,mat);
    dispMatrix(x,y,z,mat);
    return 0;
}