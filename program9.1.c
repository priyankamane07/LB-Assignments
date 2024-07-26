//Write a program which accept range from user and display all numbers in between that range
#include<stdio.h>

int RangeDisplay(int iNo1, int iNo2)
{
    int iCount = 0;

    for(iCount = iNo1; iCount<= iNo2; iCount++)
    {
        printf("%d\t", iCount);
    }

    if(iNo1 > iNo2)
    {
        printf("Invalid range");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting poing: \n");
    scanf("%d", &iValue1);

    printf("Enter ending point: \n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}