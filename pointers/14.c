#include <stdio.h>

void readMatrix(int rows, int cols,int matrix[][cols]){
    printf("enter the elements of the matrix: ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
}

void dispMatrix( int rows, int cols, int matrix[][cols]){
    printf("the elements of the matrix are : \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

}

int main(){
    int rows,cols;
    printf("enter the number of rows and cols in the matrix: ");
    scanf("%d%d",&rows,&cols);
    int mat[rows][cols];
    readMatrix(rows,cols,mat);
    dispMatrix(rows,cols,mat);
    return 0;
}