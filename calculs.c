#include <stdio.h>

int main()
{
    int num1;
    int num2;
    char op;

    printf("Enter num1 :\n");
    scanf("%d", &num1);

    printf("Enter num2 :\n");
    scanf("%d", &num2);

    printf("Enter operator :\n");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("Addition : %d\n", num1 + num2);
        break;

    case '-':
        printf("Soustraction : %d\n", num1 - num2);
        break;

    case '/':
        printf("Division : %d\n", num1 / num2);
        break;

    case '*':
        printf("Multiplication : %d\n", num1 * num2);
        break;

    case '&':
        printf("Bitwise AND : %d\n", num1 & num2);
        break;

    case '%':
        printf("Modulo : %d\n", num1 % num2);
        break;

    case '|':
        printf("Bitwise OR : %d\n", num1 | num2);
        break;

    case '~':
        printf("Bitwise NOT : %d\n", ~num1);
        break;
    default:
        break;
    }

    return 0;
}