# include <stdio.h>
# include <string.h>

struct Student
{
   int roll;
   float cgpa;
   char name [100];
};

void PrintInfo (struct Student s1);

int main () {
    struct Student s1 = {123, 4.0, "abdul haseeb imran"};
    PrintInfo(s1);
}

void PrintInfo (struct Student s1) {
    printf("Student Information :)\n");
    printf("student roll no : %d\n", s1.roll);
    printf("student cgpa is : %f\n", s1.cgpa);
    printf("student name is : %s\n", s1.name);

}
