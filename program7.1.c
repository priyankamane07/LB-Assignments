//Write a pattern which accept number from user and display below pattern
//Input: 5
//Output: * * * * * # # # # #
#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("*\t");
    }
    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}