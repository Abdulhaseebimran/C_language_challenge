#include<stdio.h>

void PrintString(char arr []);

int main () {
    char firstName [] = "Abdul haseeb";
    char lastName [] = "Imran";

    PrintString(firstName);
    PrintString(lastName);
    return 0;
}

void PrintString (char arr []) {
    for (int i = 0 ; arr[i] != '\0'; i++) {
           printf("%c", arr[i]);
    }
    printf("\n");
}