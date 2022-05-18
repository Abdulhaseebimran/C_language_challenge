# include <stdio.h>
# include <string.h>

void SaltPassword (char password []);

int main () {
    char password [100];
    scanf("%s", password);
    SaltPassword(password);

}

void SaltPassword (char password []) {
        char Salt[] = "123";
        char newpass[200];

        strcpy(newpass, password); // abdulhaseeb //
        strcat(newpass, Salt); // abdulhaseeb123 //
        puts(newpass);

}