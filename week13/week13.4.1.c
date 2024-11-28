#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int getArea(struct point p1, struct point p2);

int main(int argc, char *argv[]) {
    struct point p1, p2;
    int area;

    printf("Input p1 coordinate (x y): ");
    scanf("%d %d", &p1.x, &p1.y);  

    printf("Input p2 coordinate (x y): ");
    scanf("%d %d", &p2.x, &p2.y); 

    area = getArea(p1, p2);

    printf("Area: %d\n", area);  

    return 0;
}

int getArea(struct point p1, struct point p2) {
    int xdiff = abs(p1.x - p2.x);
    int ydiff = abs(p1.y - p2.y);
    return xdiff * ydiff;
}

