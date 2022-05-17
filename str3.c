#include<stdio.h>

int main () {
    // char name [100];
    // gets(name);
    // puts(name);

    char str [100];
    fgets(str, 100, stdin);
    puts(str);
    return 0 ;
}

// can we take multi-word String we use gets & puts //
