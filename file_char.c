# include <stdio.h>
# include <conio.h>

int main () {
    FILE *fptr;
    fptr = fopen ("Test.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);

    fclose (fptr);
}

// kisi bhi file ya character ko read karwane ke liye fscanf use karna partha hey//