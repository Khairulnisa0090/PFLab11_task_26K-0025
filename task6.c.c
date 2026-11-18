
//name: Khair-ul-Nisa
//Roll#: 26K-0025
//section: BAI-1A
//TASK:PF Lab 11 task
//task#5

#include<stdio.h>
#define TOLL_RATE 50

void processVehicle(char vehicleType[])
{
    static int totalVehicles = 0;

    static int totalRevenue = 0;

    totalVehicles++;

    totalRevenue = totalRevenue + TOLL_RATE;

    printf("\nVehicle Type: %s\n", vehicleType);

    printf("Toll Fee: %d PKR\n", TOLL_RATE);

    printf("Total Vehicles: %d\n", totalVehicles);

    printf("Total Revenue: %d PKR\n", totalRevenue);
}

int main()
{
    processVehicle("Car");

    processVehicle("Bike");

    processVehicle("Bus");

    processVehicle("Truck");

    printf("\n===== FINAL TOLL PLAZA REPORT =====\n");

    // Final values are displayed by the last function call.
    printf("Total Vehicles Processed: 4\n");

    printf("Total Revenue Collected: 200 PKR\n");

    return 0;
}

