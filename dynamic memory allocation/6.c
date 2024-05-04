 #include <stdio.h>
 #include <math.h>
 #include <stdlib.h>
 double calculate_distance(double **points, int p1, int p2) {
     double x1 = points[p1][0];
     double y1 = points[p1][1];
     double z1 = points[p1][2];
     double x2 = points[p2][0];
     double y2 = points[p2][1];
     double z2 = points[p2][2];
     return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
 }
 int main() {
     int n;
     printf("Enter the number of points: ");
     scanf("%d", &n);
     double **points = (double **)malloc(n * sizeof(double *));
     for (int i = 0; i < n; i++) {
         points[i] = (double *)malloc(3 * sizeof(double));
     }
     printf("Enter coordinates for %d points (x y z):\n", n);
     for (int i = 0; i < n; i++) {
         printf("Point %d: ", i + 1);
         scanf("%lf %lf %lf", &points[i][0], &points[i][1], &points[i][2]);
     }
     int p1, p2;
     printf("Enter indices of two points to calculate distance: ");
     scanf("%d %d", &p1, &p2);
     double distance = calculate_distance(points, p1, p2);
     printf("Distance between points %d and %d: %.2f\n", p1, p2, distance);
     for (int i = 0; i < n; i++) {
         free(points[i]);
     }
     free(points);
     return 0;
 }