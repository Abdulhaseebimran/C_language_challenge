#include<stdio.h>

int main () {
    // 2D arrays
  int marks[2][3];
  marks[0][0] = 98;
  marks[0][1] = 89;
  marks[0][2] = 96;

  marks[1][0] = 98;
  marks[1][1] = 89;
  marks[1][2] = 96;
  
  printf("%d", marks[0][0]);

  return 0;
}