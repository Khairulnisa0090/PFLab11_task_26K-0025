//name: Khair-ul-Nisa
//Roll#: 26K-0025
//section: BAI-1A
//TASK:PF Lab 11 task
//Task#1: Digital Root using Recursion

#include <stdio.h>

int sumDigits(int num)
{
    if(num == 0)
    {
        return 0;
    }

    return (num % 10) + sumDigits(num / 10);
}

int calculateChecksum(int transactionID)
{
    if(transactionID < 10)
    {
        return transactionID;
    }

    int sum = sumDigits(transactionID);

    return calculateChecksum(sum);
}

int main()
{
    int transactionID;

    printf("Enter Transaction ID: ");
    scanf("%d", &transactionID);

    if(transactionID < 0)
    {
        printf("Enter positive number.");
    }
    else
    {
        printf("Digital Root = %d",
        calculateChecksum(transactionID));
    }

    return 0;
}



