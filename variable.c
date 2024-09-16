#include <stdio.h>
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
    
    long int li = 0x1111111111111111;  // Truncated to fit in long int
    unsigned long int uli = 0x1111111111111111;
    long long int lli = 0x1111111111111111LL;  // Using LL for long long constants
    
    float f = FLT_MAX;
    double d = DBL_MAX;
    long double ld = LDBL_MAX;

    // Print all variables with their names and values
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
    printf("float f = %e\n", f);        // Scientific notation for float
    printf("double d = %e\n", d);       // Scientific notation for double
    printf("long double ld = %Le\n", ld);  // Scientific notation for long double

    return 0;
}
