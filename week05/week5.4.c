#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>

int main(int argc, char *argv[]) {
    int year, res;

    printf("Input the year: ");
    scanf("%d", &year);

    res = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("Is the year %d a leap year? %d\n", year, res);

    return 0;
}

