# include <stdio.h>
# include <conio.h>

int main () {
    FILE *fptr;
    fptr = fopen ("Test.txt", "w");
    
    fputc('A', fptr);
    fputc('B', fptr);
    fputc('D', fptr);
    fputc('U', fptr);
    fputc('L', fptr);
    fputc('H', fptr);
    fputc('A', fptr);
    fputc('S', fptr);
    fputc('E', fptr);
    fputc('E', fptr);
    fputc('B', fptr);



    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));

    // fprintf(fptr ,"%c", 'H');
    // fprintf(fptr ,"%c", 'A');
    // fprintf(fptr ,"%c", 'S');
    // fprintf(fptr ,"%c", 'E');
    // fprintf(fptr ,"%c", 'E');
    // fprintf(fptr ,"%c", 'B');

    fclose(fptr);
    return 0;
}