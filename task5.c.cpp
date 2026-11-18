//name: Khair-ul-Nisa
//Roll#: 26K-0025
//section: BAI-1A
//TASK:PF Lab 11 task
//task#5

#include <stdio.h>

// Outer Structure
struct HospitalRecord
{
    int recordID;
    int roomNumber;

    // Inner Structure
    struct PatientInfo
    {
        char name[50];
        int age;
        char disease[50];

    } patient;
};

int main()
{
    struct HospitalRecord h1 =
    {
        501,
        12,
        {"Ahmed", 25, "Fever"}
    };

    // Structure Pointer
    struct HospitalRecord *ptr;

    // Store address
    ptr = &h1;

    printf("----- Hospital Record -----\n");

    // Outer Structure Members
    printf("Record ID: %d\n", ptr->recordID);

    printf("Room Number: %d\n", ptr->roomNumber);

    printf("\n----- Patient Information -----\n");

    // Inner Structure Members
    printf("Patient Name: %s\n", ptr->patient.name);

    printf("Patient Age: %d\n", ptr->patient.age);

    printf("Disease: %s\n", ptr->patient.disease);

    return 0;
}
