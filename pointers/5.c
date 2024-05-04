#include <stdio.h>

void MinMax(double *data, int length, double *retmin, double *retmax) {
    
    *retmin = *data; 
    *retmax = *data;
    
    for (int i = 1; i < length; i++) {
        if (data[i] < *retmin) { 
            *retmin = data[i];
        }
        if (data[i] > *retmax) { 
            *retmax = data[i];
        }
    }
}

int main() {
    double arr[] = {3.5, 1.2, 9.8, 4.6, 2.1};
    int length = sizeof(arr) / sizeof(arr[0]);
    double min, max;
    
    MinMax(arr, length, &min, &max);
    
    printf("Minimum value: %.2f\n", min);
    printf("Maximum value: %.2f\n", max);
    
    return 0;
}
