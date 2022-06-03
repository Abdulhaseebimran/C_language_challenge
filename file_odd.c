# include <stdio.h>
# include <conio.h>

int main () {
    FILE *fptr;
    fptr = fopen ("Odd.txt", "w");
     
     int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
       if (i % 2 != 0)
       {
           fprintf(fptr , "%d\n", i);
       }
       
    }
    fclose(fptr);
    return 0;
}