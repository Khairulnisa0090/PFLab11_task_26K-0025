//name: Khair-ul-Nisa
//Roll#: 26K-0025
//section: BAI-1A
//TASK:PF Lab 11 task
//task#4: 

#include <stdio.h>

// Separate Address Structure
struct Address
{
    char City[30];
    int ZipCode;
    char State[30];
};

// Student Structure
struct Student
{
    int RollNo;
    char Name[50];
    float CGPA;

    struct Address studentAddress;
};

int main()
{
    struct Student student1 =
    {
        101,
        "Ali",
        3.75,
        {"Khairpur", 66020, "Sindh"}
    };

    printf("----- Student Profile -----\n");

    printf("Roll Number: %d\n", student1.RollNo);

    printf("Name: %s\n", student1.Name);

    printf("CGPA: %.2f\n", student1.CGPA);

    printf("\n----- Permanent Address -----\n");

    printf("City: %s\n",
    student1.studentAddress.City);

    printf("Zip Code: %d\n",
    student1.studentAddress.ZipCode);

    printf("State: %s\n",
    student1.studentAddress.State);

    return 0;
}
