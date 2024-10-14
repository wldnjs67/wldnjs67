#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main(int argc, char *argv[]) {
    int answer = 50;  
    int num;          
    int tries = 0;    

    do {
        printf("Guess a number: ");
        scanf("%d", &num);  

        if (num > answer) {
            printf("High!\n");
        } else if (num < answer) {
            printf("Low!\n");
        }
        
        tries++;  
    } while (num != answer);

    printf("Congratulations! Trials: %d\n", tries);

    return 0;
}

