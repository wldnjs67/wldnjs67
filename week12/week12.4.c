#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	float average, sum;
    int i;
    int grade[5];
    int (*pa)[5]; 

    pa = &grade;  


    for (i = 0; i < 5; i++) {
        printf("Input value - grade[%i] = ", i);
        scanf("%d", &grade[i]); 
    }


    for (i = 0; i < 5; i++) {
        printf("grade[%d] = %d\n", i, (*pa)[i]);
       sum += (*pa)[i];  
    }


    average = sum / 5.0;  

    printf("average = %.2f\n", average); 

    return 0;
}

