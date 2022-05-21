// pointer to structer // 
# include <stdio.h>
# include <string.h>

struct Student
{
    int roll;
    float cgpa ;
    char name [100];
};
int main () {
struct Student s1 = {123, 4.0, "abdul haseeb imran"};
struct Student *ptr  = &s1;
printf("student roll no : %d\n", (*ptr).roll);
printf("student cgpa is : %f\n", (*ptr).cgpa);
printf("student name is : %s\n", (*ptr).name);

return 0;

}