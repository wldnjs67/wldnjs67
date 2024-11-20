#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char s[3][100]; 
    int i;

    for (i = 0; i < 3; i++) {
        printf("Input a word: ");
        scanf("%99s", s[i]); 
    }

    FILE *fp;
    fp = fopen("C:\\programming basics\\text\\sample.txt", "w"); 
    fprintf(fp, "%s\n%s\n%s\n", s[0], s[1], s[2]);
    fclose(fp);

    return 0;
}

