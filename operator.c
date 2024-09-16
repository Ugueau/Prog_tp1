#include <stdio.h>

int main () {
    int a = 16;
    int b = 3;

    printf("Addition : %d \n", a+b);
    printf("Multiplication : %d \n", a*b);
    printf("Soustracton : %d \n", a-b);
    float c = a / b; // Use a middle variable to cast the resutl into float (keep precision)
    printf("Divide : %f \n", c); // So write it as a float here not an int
    printf("Modulo : %d \n", a%b);
    printf("A equals b : %d \n", a == b);
    printf("A > B : %d \n", a>b);
    return 0;
}