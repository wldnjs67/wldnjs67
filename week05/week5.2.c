#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2;
	
	printf("Input two integers: ");
	scanf("%d %d", &num1, &num2);
	
	printf(" + result is %d\n", num1 + num2);
	printf(" - result is %d\n", num1 - num2);
	printf(" * result is %d\n", num1 * num2);
	printf(" / result is %d\n", num1 / num2);
	printf(" %% result is %d\n",  num1 % num2);
	return 0;
}
