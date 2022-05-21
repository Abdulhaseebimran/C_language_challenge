# include <stdio.h>
# include <string.h>

struct vector {
    int x;
    int y;
};

void CalSum (struct vector v1, struct vector v2, struct vector sum);

int main () {
    struct vector v1 = {2, 10};
    struct vector v2 = {5, 8};
    struct vector sum = {0};

    CalSum(v1, v2, sum);
    return 0;
}

void CalSum (struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v2.y + v2.y;

    printf("sum of x is :- %d\n", sum.x);
    printf("sum of y is :- %d\n", sum.y);
}