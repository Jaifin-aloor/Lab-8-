 #include <stdio.h>
 #include <stdlib.h>
 int compare(const void *a, const void *b) {
     return (*(int *)a - *(int *)b);
 }
 int *intersect(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize) {
     int *intersection = (int *)malloc(nums1Size * sizeof(int));
     int count = 0;
     if (nums1Size > nums2Size) {
         int *temp = nums1;
         nums1 = nums2;
         nums2 = temp;
         int tempSize = nums1Size;
         nums1Size = nums2Size;
         nums2Size = tempSize;
     }
     qsort(nums1, nums1Size, sizeof(int), compare);
     for (int i = 0; i < nums2Size; i++) {
         if (bsearch(&nums2[i], nums1, nums1Size, sizeof(int), compare) != NULL) {
             intersection[count++] = nums2[i];
         }
     }
     *returnSize = count;
     return intersection;
 }
 int main() {
     int arr1[] = {7, 1, 5, 2, 3, 6};
     int arr2[] = {3, 8, 6, 20, 7};
     int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
     int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
     int returnSize;
     int *intersection = intersect(arr1, arr1Size, arr2, arr2Size, &returnSize);
     printf("Intersection: {");
     for (int i = 0; i < returnSize; i++) {
         printf("%d", intersection[i]);
         if (i < returnSize - 1) {
             printf(", ");
         }
     }
     printf("}\n");
     free(intersection);
     return 0;
 }