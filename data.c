#include <stdio.h>

struct point{
    int x;
    int y;
};

int main (void){
    struct point a;
    a.x = 5;
    a.y = 10;

    printf("%d\n%d\n", a.x, a.y);
}