#include <stdio.h>

int main () {
    //Size to go through adjustable
    const int SIZE = 1000;
    //Lists set to to max size but can be improved to take less space
    int condition1[SIZE];
    int condition2[SIZE];
    int condition3[SIZE];
    //Index of last item in the lists
    int last1 = 0;
    int last2 = 0;
    int last3 = 0;

    //Loop to check each number
    for (int i = 0; i <= SIZE; i++){

        //Check condition 1 using modulo
        if( i % 4 == 0 && i % 6 != 0){
            condition1[last1] = i;
            last1++;
        }

        //Check condition 2 using modulo
        if( i % 2 == 0 && i % 8){
            condition2[last2] = i;
            last2++;
        }

        //Check condition 3 using modulo
        if( i % 5 == 0 && i % 7 == 0 && i % 10 != 0){
            condition3[last3] = i;
            last3++;
        }   
    }

    //Display lists using another type of loop
    int counter = 0;
    printf("First list : \n");
    while( counter < last1 ){
        printf("%d ; ",condition1[counter]);
        counter++;
    }

    counter = 0;
    printf("\nSecond list : \n");
    while( counter < last2 ){
        printf("%d ; ",condition2[counter]);
        counter++;
    }

    counter = 0;
    printf("\nThird list : \n");
    while( counter < last3 ){
        printf("%d ; ",condition3[counter]);
        counter++;
    }
    return 0;
}