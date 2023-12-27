#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main() {
    float ax;
    float z1 = 0;
    float z2 = 0;

    printf("Enter a: ");
    scanf_s("%f", &ax);

    //convert to radians
    float a = ax * M_PI / 180.0;

    z1 = cos(a) + sin(a) + cos(a * 3) + sin(a * 3);
    z2 = 2 * sqrt(2) * cos(a) * sin(M_PI / 4 + a * 2);

    printf("z1 = %f\n", z1);
    printf("z2 = %f", z2);

    return 0;
}