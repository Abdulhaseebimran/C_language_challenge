#include<stdio.h>

int main () {

    int age = 19;
    int _age = 20;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u\n, %u\n difference = %u\n", ptr, _ptr, ptr-_ptr);
    _ptr = &age;

    printf("comparsion = %u\n", ptr == _ptr);

    return 0;
}