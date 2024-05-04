 #include <stdio.h>
 #include <stdlib.h>
 void threeColorsSort(int *theArray, int arraySize) {
     int count[3] = {0}; 
      count[theArray[i]]++;
     }
     int index = 0;
     for (int i = 0; i < 3; i++) {
         while (count[i] > 0) {
             theArray[index++] = i;
             count[i]--;
         }
     }
 }
 int main() {
     int n;
     printf("Enter the number of integers: ");
     scanf("%d", &n);
     int *numbers = (int *)malloc(n * sizeof(int)); 
     if (numbers == NULL) {
         printf("Memory allocation failed\n");
         return 1;
     }
     printf("Enter %d integers (0, 1, or 2 only):\n", n);
     for (int i = 0; i < n; i++) {
         scanf("%d", &numbers[i]);
     }
     threeColorsSort(numbers, n);
     printf("Sorted array: ");
     for (int i = 0; i < n; i++) {
         printf("%d ", numbers[i]);
     }
     printf("\n");
     free(numbers);
     return 0;
 }