#include<stdio.h>

int main () {

    char star = "*";
    char *ptr = &star;
    printf("ptr is %u\n", ptr);
    ptr++;
    printf("ptr is %u\n", ptr);
    ptr--;
    printf("ptr is %u\n", ptr);

    return 0;
}