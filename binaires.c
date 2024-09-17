/*
binaires.c
Hugo MILLOT | Maël CHALON
Convert a number into binary
*/
#include <stdio.h>
// Lib for power operation
#include <math.h>

int main()
{
    int n;
    printf("Please enter a number :");
    scanf("%d", &n);
    // boolean to label a negative number
    int isNegative = n > 0 ? 0 : 1;
    // int = 4o = 32bits
    int bin[32] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    // First loop that convert abs value of input into bin
    for (int i = 32; i > 0; i--)
    {
        // I use power 2 modulo but we can use a division by 2 + modulo to get the remainder
        int power = (int)(pow(2, i - 1));
        if (n % power != n)
        {
            n = n - power;
            bin[32 - i] = 1;
        }
        else
        {
            bin[32 - i] = 0;
        }
    }

    //Only for negative 
    //Nagative number = invert all bit and add one 1 to result
    if (isNegative)
    {
        int isOneAdded = 0;
        //Loop to invert all the bit
        for (int i = 31; i >= 0; i--)
        {
            if (bin[i])
            {
                bin[i] = 0;
            }
            else
            {
                bin[i] = 1;
            }
            //Used to add 1 to result
            if (!isOneAdded)
            {
                if (bin[i] != 1)
                {
                    bin[i] = 1;
                    isOneAdded = 1;
                }
                else
                {
                    bin[i] = 0;
                }
            }
        }
    }

    //Last loop to display the bin
    for (int i = 0; i < 32; i++)
    {
        printf("%d", bin[i]);
    }
    return 0;
}