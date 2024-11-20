#include <stdio.h>
#include <stdlib.h>
char *proverb="All that glisters is not gold.";

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void setPointer(char *q){
	q=proverb;
}

int main(void){
	char *p="zzz";
	setPointer(p);
	printf("%s\n",p);
	
	return 0;
}
