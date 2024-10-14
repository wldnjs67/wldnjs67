#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

#include <stdio.h>

int main(int argc, char *argv[]) {
    int num1;
    int num2;

    printf("Enter an integer: ");
    scanf("%i", &num1);

    if (num1 < 0) {
        num2 = num1 * (-1);  
        printf("%i\n", num2);  
    } else {
        printf("%i\n", num1);
    }

    return 0;
}

