#include<stdio.h>

int main () {
   
   int helpCard [5];

   int *ptr = &helpCard[0];
   for(int i = 0; i<=5; i++){
       printf("%d index : ", i);
       scanf("%d", &helpCard[i]);
   }

   // output
   for (int i = 0; i <= 5; i++)
   {
       printf("%d index : %d\n",i, &helpCard[i]);
   }
   
    return 0;
}