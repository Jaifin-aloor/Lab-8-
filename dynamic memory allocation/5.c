 #include <stdio.h>
 double scalar_product(int len, double arr1[], double arr2[]) {
     double result = 0.0;
     for (int i = 0; i < len; i++) {
         result += arr1[i] * arr2[i];
     }
     return result;
 }
 int main() {
     int len;
     printf("Enter the length of arrays: ");
     scanf("%d", &len);
     double arr1[len], arr2[len];
     printf("Enter elements for array 1: ");
     for (int i = 0; i < len; i++) {
         scanf("%lf", &arr1[i]);
     }
     printf("Enter elements for array 2: ");
     for (int i = 0; i < len; i++) {
         scanf("%lf", &arr2[i]);
     }
     double result = scalar_product(len, arr1, arr2);
     printf("Scalar product: %.2f\n", result);
     return 0;
 }
