#include <stdio.h>
#include <stdlib.h>

int factorial(int a) {
    int res=1;
    int i;
    for (i = 1; i <= a; i++) {
        res = res * i;
    }
    return res;
}


int combination(int n, int r) {
    return (factorial(n) / (factorial(n - r) * factorial(r)));
}


int get_integer() {
    int num;
    printf("Enter the value: ");
    scanf("%i", &num);
    return num;
}


int main(void) {
    int n = get_integer();
    int r = get_integer();
    
    int result = combination(n, r);
    
    printf("The result of C(%i, %i) is %i\n", n, r, result);
    
    return 0;
}

