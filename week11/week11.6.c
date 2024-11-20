#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = NULL;
    char c;

    fp = fopen("C:/programming basics/text/sample.txt", "r");
    
    if (fp == NULL) 
        printf("파일을 못열음.\n");
    
    
    while ((c = fgetc(fp)) != EOF) 
        putchar(c); 

    fclose(fp);
}

