#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sqaure_array(int a[], int size)
{
	int i;
	for (i=0;i<size;i++)
	 a[i]=a[i]*a[i];
}

void print_array(int a[], int size)
{
	int i;
	
	for (i=0;i<size;i++)
	 printf("%3d", a[i]);
	printf("\n");
}
