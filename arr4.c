#include<stdio.h>

int main () {

    float price = 100.0;
    float *ptr = &price;
    printf("ptr is %u\n", ptr);
    ptr++;
    printf("ptr is %u\n", ptr);
    ptr--;
    printf("ptr is %u\n", ptr);

    return 0;
}