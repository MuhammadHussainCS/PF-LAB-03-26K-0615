#include<stdio.h>
#define PI 3.14159265358979
int main(){
    // const double PI = 3.14159265358979;
    printf("\nPI value upto 2 decimal places is = %.2lf", PI);
    printf("\nPI value upto 4 decimal places is = %.4lf", PI);
    printf("\nPI value upto 6 decimal places is = %.6lf", PI);
    printf("\nPI value upto 8 decimal places is = %.8lf", PI);
    printf("\nPI value upto 10 decimal places is = %.10lf", PI);
    printf("\nPI value upto 12 decimal places is = %.12lf", PI);
    printf("\nPI value upto 14 decimal places is = %.14lf", PI);
    return 0;
}