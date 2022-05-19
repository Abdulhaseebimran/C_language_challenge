# include <stdio.h>
# include <string.h>

int main () {
    char Str [100];
    printf("Enter a String :-");
    gets(Str);

    for(int i = 0; Str[i] != '\0'; i++){
       if(Str[i] >= 'a' && Str[i] <= 'z'){
           Str[i] = Str[i] -32;
       }
    }
    printf("\n String is Upper case is : %s", Str);
    return 0;
}

// ye program lower string ko upper string me convert ker deta hey // 