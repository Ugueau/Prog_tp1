/*
variables.c
Hugo MILLOT | Maël CHALON
Show significant value of different types
*/
#include <stdio.h>
//I use this libs to get max value of most of types
#include <limits.h>
#include <float.h> 

int main() {
    char c = 'c';
    signed char sc = SCHAR_MAX;
    unsigned char uc = UCHAR_MAX;
    short shrt = SHRT_MAX;
    unsigned short ushrt = USHRT_MAX;
    int i = INT_MAX;
    unsigned int ui = UINT_MAX;
    long int li = 0x7FFFFFFF; // Don't find the max const for these ones, I'm not sure thats the exactly good amount of F but its work
    unsigned long int uli = 0xFFFFFFFF;
    long long int lli = 0xFFFFFFFFFFFFFFFFLL; // LL to specify that it is long long int
    float f = FLT_MAX;
    double d = DBL_MAX;
    long double ld = LDBL_MAX;

    // Print all variables
    printf("char c = '%c'\n", c);
    printf("signed char sc = %d\n", sc);
    printf("unsigned char uc = %u\n", uc);
    printf("short shrt = %d\n", shrt);
    printf("unsigned short ushrt = %u\n", ushrt);
    printf("int i = %d\n", i);
    printf("unsigned int ui = %u\n", ui);
    printf("long int li = %ld\n", li);
    printf("unsigned long int uli = %lu\n", uli);
    printf("long long int lli = %lld\n", lli);
    printf("float f = %e\n", f);        // Scientific notation from now to end
    printf("double d = %e\n", d);
    printf("long double ld = %Le\n", ld); //Long scientific notation else compilator explosion
    return 0;
}
