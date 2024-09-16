#include <stdio.h>
#include <string.h>

int main () {
    printf("=== Signed types : ===\n");
    printf("Size of char : %d \n", (int)(sizeof(char)));
    printf("Size of short : %d \n", (int)(sizeof(short)));
    printf("Size of int : %d \n", (int)(sizeof(int)));
    printf("Size of long int : %d \n", (int)(sizeof(long int)));
    printf("Size of long long int : %d \n", (int)(sizeof(long long int)));
    printf("Size of float : %d \n", (int)(sizeof(float)));
    printf("Size of double : %d \n", (int)(sizeof(double)));
    printf("Size of long double : %d \n", (int)(sizeof(long double)));

    printf("\n=== Unsigned types : ===\n");
    printf("Size of unsigned char : %d \n", (int)(sizeof(unsigned char)));
    printf("Size of unsigned short : %d \n", (int)(sizeof(unsigned short)));
    printf("Size of unsigned int : %d \n", (int)(sizeof(unsigned int)));
    printf("Size of unsigned long int : %d \n", (int)(sizeof(unsigned long int)));
    printf("Size of unsigned long long int : %d \n", (int)(sizeof(unsigned long long int)));
    return 0;
}