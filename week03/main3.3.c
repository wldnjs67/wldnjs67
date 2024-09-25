#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	
	printf("enter a character: ");
	scanf("%c", &c);
	
	
	printf("the next character of %c (%i) is %c (%i)", c, c, c+1, c+1);
	
	return 0;
}
