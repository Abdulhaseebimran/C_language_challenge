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

    printf("==========================================\n");

    struct Student s2;
    s2.roll = 1234;
    s2.cgpa = 3.0;
    strcpy(s2.name, "Ammar");

    printf("Student name is : %s\n", s2.name);
    printf("Student roll number is : %d\n", s2.roll);
    printf("Student cgpa is : %f\n", s2.cgpa);

    printf("==========================================\n");


    struct Student s3;
    s3.roll = 12345;
    s3.cgpa = 3.5;
    strcpy(s3.name, "Bilal");

    printf("Student name is : %s\n", s3.name);
    printf("Student roll number is : %d\n", s3.roll);
    printf("Student cgpa is : %f\n", s3.cgpa);
    

    return 0;
}

// structure of three student //