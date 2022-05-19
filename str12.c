# include <stdio.h>
# include <string.h>

int CountVowels (char Str []);

int main () {
    char Str [] = "Abdul haseeb imran";
    printf("vowels are : %d", CountVowels(Str));
}

int CountVowels (char Str []) {
    int count = 0;
    for ( int i = 0; Str[i] != '\0'; i++){
        if (Str[i] == 'a' || Str[i] == 'e' || Str[i] == 'i' || Str[i] == 'o' || Str[i] == 'u')
        {
           count++;
        }
        
    }
    return count;
}