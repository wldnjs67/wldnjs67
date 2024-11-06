#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void square_array(int a[], int size);
void print_array(int a[], int size);

int main(void)
{
	int list[SIZE]={1,2,3,4};
	
	print_array(list,SIZE);
	square_array(list, SIZE);
	print_array(list, SIZE);
	
	return 0;
}
