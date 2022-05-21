# include <stdio.h>
# include <string.h>

struct Student
{
    int roll;
    float cgpa ;
    char name [100];
};

int main () {
    struct Student s1;
    s1.roll = 123;
    s1.cgpa = 4.0;
    strcpy(s1.name, "Abdul haseeb imran");

    printf("Student name is : %s\n", s1.name);
    printf("Student roll number is : %d\n", s1.roll);
    printf("Student cgpa is : %f\n", s1.cgpa);

    return 0;
}
