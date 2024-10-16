#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int sumTwo (int a, int b)
	{
		int sum;
		sum = a+b;
		return sum;
	}
	
	int square (int n)
	{
		int square;
		square = n*n;
		return square;
	}
	
	int get_max (int x, int y)
	{
		int max;
		if (x>y)
		{
			max=x;
		}
		else 
		{
			max=y;
		}
	}
	
	int main()
	{
		int num1, num2, sum, square, max;
		printf("Enter the integers: ");
		scanf("%d %d", &num1, &num2);
		
		sum = int sumTwo (num1, num2);
		square = int square (num1);
		max = int get_max (num1, num2);
		
		printf("Result - Sum: %d, Square: %d, Max: %d", sum, square, max);
	}
}
