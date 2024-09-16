#include <stdio.h>

int main() {
    printf("Enter a number betwen 1 and 10 : \n");
    int size;
    scanf("%d", &size);
    if( size < 10 && size > 0){
        for (int i = 0 ; i < size ; i++){
            printf("\n* ");
            for(int j = 1; j < i; j++){
                if(i == size-1){
                    printf("* ");
                }else{
                    printf("# ");
                }
            }
            if( i != 0){
                printf("*");
            }
        }
    }else{
        printf("Invalid size !");
    }
    return 0;
}