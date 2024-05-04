 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 double *Random(int n) {
     double *arr = (double *)malloc(n * sizeof(double));
     if (arr == NULL) {
         printf("Memory allocation failed!\n");
         exit(1);
     }
     srand(time(NULL));
     for (int i = 0; i < n; i++) {
         arr[i] = (double)rand() / RAND_MAX;
     }
     return arr;
 }
 double **Matrix(double *A, int n, int r) {
     double **matrix = (double **)malloc(r * sizeof(double *));
     if (matrix == NULL) {
         printf("Memory allocation failed!\n");
         exit(1);
     }
     for (int i = 0; i < r; i++) {
         matrix[i] = (double *)malloc(n * sizeof(double));
         if (matrix[i] == NULL) {
             printf("Memory allocation failed!\n");
             exit(1);
         }
         for (int j = 0; j < n; j++) {
             if (j < n) {
                 matrix[i][j] = A[j];
             } else {
                 matrix[i][j] = 0.0;
             }
         }
     }
     return matrix;
 }
 double *Max(double *A, int n) {
     double *max = A;
     for (int i = 1; i < n; i++) {
         if (A[i] > *max) {
             max = &A[i];
         }
     }
     return max;
 }
 int main() {
     int n = 5;
    double *arr = Random(n);
     printf("Random array:\n");
     for (int i = 0; i < n; i++) {
         printf("%f ", arr[i]);
     }
     printf("\n");
     int r = 3;
     double **matrix = Matrix(arr, n, r);
     printf("Matrix:\n");
     for (int i = 0; i < r; i++) {
         for (int j = 0; j < n; j++) {
             printf("%f ", matrix[i][j]);
         }
         printf("\n");
     }
     double *max = Max(arr, n);
     printf("Maximum value in array: %f\n", *max);
     free(arr);
     for (int i = 0; i < r; i++) {
         free(matrix[i]);
     }
     free(matrix);
     return 0;
 }
