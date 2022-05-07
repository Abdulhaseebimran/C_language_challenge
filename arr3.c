#include<stdio.h>

int main () {
   // pointer arithmetic
    int age = 19;
    int *ptr = &age;
    printf("ptr is %u\n", ptr);
    ptr++;
    printf("ptr is %u\n", ptr);
    ptr--;
    printf("ptr is %u\n", ptr);

    return 0;
}