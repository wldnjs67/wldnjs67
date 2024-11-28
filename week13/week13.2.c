#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main(int argc, char *argv[]) {
    struct point p1, p2;
    int xdiff, ydiff;
    double dist;

    printf("Input p1 coordinate (x y): ");
    scanf("%d %d", &p1.x, &p1.y);  

    printf("Input p2 coordinate (x y): ");
    scanf("%d %d", &p2.x, &p2.y); 


    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

 
    dist = sqrt(xdiff * xdiff + ydiff * ydiff);  

    printf("Distance: %.6f\n", dist);  

    return 0;
}
