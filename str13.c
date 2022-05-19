# include <stdio.h>
# include <string.h>

void CheckChar (char Str [], char ch);

int main () {
    char Str [] = "Karachi the city of light!";
    char ch = 'x';
    CheckChar(Str, ch);
}

void CheckChar(char Str [], char ch){
    for(int i=0 ; Str[i] != '\0'; i++){
        if (Str[i] == ch)
        {
           printf("Character is present! ");
           return;
        }
        
    }
    printf("Character is Not presente:(");
}