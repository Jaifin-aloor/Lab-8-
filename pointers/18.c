 #include <stdio.h>
 int* searchElement(int *arr, int size, int target) {
     for (int i = 0; i < size; i++) {
         if (*arr == target) {
             return arr;
         }
         arr++;
     }
     return NULL;
 }
 int main() {
     int arr[] = {1, 2, 3, 4, 5};
     int size = sizeof(arr) / sizeof(arr[0]);
     int target;
     printf("Enter the element to search: ");
     scanf("%d", &target);
     int *result = searchElement(arr, size, target);
     if (result != NULL) {
         printf("Element %d found at index %ld\n", target, result - arr);
     } else {
         printf("Element %d not found\n", target);
     }
     return 0;
 }
