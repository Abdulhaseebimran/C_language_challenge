# include <stdio.h>
# include <stdlib.h>

int main () {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    printf("Enter Number (0-5) :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d\n",&ptr[i]);
    }
       for (int i = 0; i < 8 ;i++)
     {
        printf("number of %d is %d\n", i , &ptr[i]);
     }
      return 0;
}
