#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main() {
    int num = 0;  
    char c;

    printf("Input a string: ");

    while((c=getchar())!= '\n') {
        if (48<=c&&c<=57) {  
            num++;
        }
    }

    printf("The number of digits is %d\n", num);

    return 0;
}


