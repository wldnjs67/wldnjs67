#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>  // Required for printf and scanf

int sumTwo(int a, int b) {
    return (a + b);
}

int square(int n) {
    return (n * n);
}

int get_max(int x, int y) {
    if (x > y) return x;
    else return y;
}

int main() {
    int num1, num2, sum, sq, max;

    printf("Enter the integers: ");
    scanf("%d %d", &num1, &num2);

    sum = sumTwo(num1, num2);
    sq = square(num1);
    max = get_max(num1, num2);

    printf("Result - Sum: %d, Square: %d, Max: %d\n", sum, sq, max);

    return 0;
}

