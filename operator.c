#include <stdio.h>

int main () {
    int a = 16;
    int b = 3;

    printf("Addition : %d \n", a+b);
    printf("Multiplication : %d \n", a*b);
    printf("Soustracton : %d \n", a-b);
    float c = a / b;
    printf("Divide : %f \n", c); // Cast into float to save precision
    printf("Modulo : %d \n", a%b);
    printf("A equals b : %d \n", a == b);
    printf("A > B : %d \n", a>b);
    return 0;
}