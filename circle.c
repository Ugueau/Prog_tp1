#include <stdio.h>
#define PI 3.14159

int main() {
    float radius;
    printf("Enter a radius : \n");
    scanf("%f",&radius);
    float area = radius * radius * PI;
    printf("Area of your circle is %f \n", area);
    float perimeter = 2 * PI * radius;
    printf("Perimeter of your circle is %f \n", perimeter);
}