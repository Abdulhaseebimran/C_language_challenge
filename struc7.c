# include <stdio.h>
# include <string.h>

typedef struct ComputerScience {
    int roll;
    float cgpa;
    char name [100];
} cs;

int main () {
    cs s1;
    s1.roll = 1234;
    s1.cgpa = 4.0;
    strcpy(s1.name, "abdul haseeb imran");

    printf("student name is : %s\n", s1.name);
    printf("student roll no is : %d\n", s1.roll);
    printf("Student cgpa is : %f\n", s1.cgpa);

    return 0;
}

// using typedef in this structure // 
