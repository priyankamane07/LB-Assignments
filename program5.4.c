//Write a program which accept N from user and print all odd numbers up to N.
//Input: 15
//Output: 1 3 5 7 9 11 13

#include<stdio.h>

void oddDisplay(int iNo)
{
    int iCount = 0;

    for(iCount = 0; iCount <= iNo; iCount++)
    {
        if(iCount % 2 != 0)
        {
            printf("%d\t", iCount);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    oddDisplay(iValue);

    return 0;
}