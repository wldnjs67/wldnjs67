#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){
	char src[]= "The Worst things to eat before you sleep";
	char dst[100];
    strcpy(dst, src);
	printf("copied string:%s", dst);
}
