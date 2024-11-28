#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2);

int main(int argc, char *argv[]) {
    struct point p1, p2;
    struct point *pPtr1, *pPtr2;
    int area;

    pPtr1 = &p1;
    pPtr2 = &p2;

    printf("Input p1 coordinate (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Input p2 coordinate (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    area = getArea(pPtr1, pPtr2);
    
    printf("Area: %d\n", area);

    return 0;
}

int getArea(struct point *pPtr1, struct point *pPtr2) {
    int xdiff = abs(pPtr1->x - pPtr2->x); 
    int ydiff = abs(pPtr1->y - pPtr2->y);
    return xdiff * ydiff; 
}

