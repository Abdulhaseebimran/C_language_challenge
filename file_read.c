# include <stdio.h>
# include <conio.h>

int main () {
    FILE *fptr;
    fptr = fopen ("Test.txt", "r");
    if(fptr == NULL) {
        printf("File does not exits\n");
    } else {
         fclose(fptr);
    }
    // fclose(fptr);

    return 0;
}