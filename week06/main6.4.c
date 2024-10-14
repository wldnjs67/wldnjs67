#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int sum = 0;
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++) { 
        sum += i;
    }

    printf("The result is %d\n", sum);
    
    return 0;
}

