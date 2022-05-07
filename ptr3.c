#include<stdio.h>

int main () {
    int age = 19;
    int *ptr = &age;

    // values
    printf("%d\n", age); 
    printf("%d\n", *ptr); 
    printf("%d\n", *(&age)); 
    return 0;
}