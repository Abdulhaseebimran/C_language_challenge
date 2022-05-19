# include <stdio.h>
# include <string.h>

void Slice(char Str[], int n, int m);

int main () {
    char Str[] = "HelloWorld";
    Slice(Str, 3, 6);
    return 0;
}

void Slice(char Str[], int n, int m) {
    char newStr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++) {
        newStr[j] = Str [i]; 
    } 
    newStr[j] = '\0';
    puts(newStr);
}