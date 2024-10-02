#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sec;
	
	printf("Input the second: ");
	scanf("%d", &sec);
	
	printf("The time is %d : %d", sec/60, sec%60);
	
	return 0;
}
