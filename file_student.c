# include <stdio.h>
# include <conio.h>

int main () {
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter Name : ");
    scanf("%s", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your cgpa: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student name : %s\n", name);
    fprintf(fptr, "Student age : %d\n", age);
    fprintf(fptr, "Student cgpa : %f\n", cgpa);

    fclose(fptr);
    return 0;
} 