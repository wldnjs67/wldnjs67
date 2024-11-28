#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

struct student {
    int ID;
    int score;
};

int main(void) {
    struct student s[STUDENTNUM];
    int i;
    double sum = 0, avg; 
	int maxScore = -1;
	int maxID = -1; 

    for (i = 0; i < STUDENTNUM; i++) {
        printf("Input the ID: ");
        scanf("%d", &s[i].ID);

        printf("Input the score: ");
        scanf("%d", &s[i].score);

        sum += s[i].score;
        
        if (s[i].score > maxScore) {
            maxScore = s[i].score;
            maxID = s[i].ID;
    }
}

    avg = sum / STUDENTNUM;

    printf("The average of the score: %.6f\n", avg);

    printf("The highest score- ID: %d, score: %d ", maxID, maxScore);
	return 0;

}

