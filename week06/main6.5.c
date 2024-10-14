#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main(int argc, char *argv[]) {
    int num1, num2;
    char op;


    printf("Enter the calculation: ");
    scanf("%d %c %d", &num1, &op, &num2);


    switch (op) {
        case '+':
            printf("= %d\n", num1 + num2);
            break;
        case '-':
            printf("= %d\n", num1 - num2);
            break;
        case '*':
            printf("= %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("= %d\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("= %d\n", num1 % num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
