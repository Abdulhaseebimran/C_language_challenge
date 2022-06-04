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
     
     ptr = realloc(ptr, 10);
     printf("Enter Number (0-10) :");
     for (int i = 0; i < 10; i++)
     {
         scanf("%d", &ptr[i]);
     }
     
     // print
     for (int i = 0; i < 10 ;i++)
     {
        printf("number of %d is %d\n", i , &ptr[i]);
     }
      return 0;
}