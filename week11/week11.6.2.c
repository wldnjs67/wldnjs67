#include <stdio.h>
#include <stdlib.h>

void main(void) {
    FILE *fp = NULL;
    char c[256]; 

    fp = fopen("C:/programming basics/text/sample.txt", "r");
    
    if (fp == NULL) {
        printf("파일을 못열음.\n");
    }

    
    while (fgets(c, sizeof(c), fp) != NULL) { 
        printf("%s", c); 
    }

    fclose(fp);
}

