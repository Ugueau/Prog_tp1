#include <stdio.h>

int main() {
    printf("Enter a number betwen 1 and 10 : \n");
    int size;
    scanf("%d", &size);
    //Checking for bad sizes
    if( size < 10 && size > 0){
        //First loop to go through lines
        for (int i = 0 ; i < size ; i++){
            //Starting *
            printf("\n* ");
            //Second loop to go into each char of the line 
            for(int j = 1; j < i; j++){
                //Checking if it is the last line
                if(i == size-1){
                    printf("* ");
                }else{
                    printf("# ");
                }
            }
            //Checking if this is the first line to not display 2 *
            if( i != 0){
                //Ending *
                printf("*");
            }
        }
    //Manage bad sizes
    }else{
        printf("Invalid size !");
    }
    return 0;
}