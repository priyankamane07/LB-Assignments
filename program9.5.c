//Write a program which accept range from user and display all numbers in between that range in reverse order
#include<stdio.h>

int RangeDisplayRev(int iNo1, int iNo2)
{
    int iCount = 0;

    for(iCount = iNo2; iCount >= iNo1; iCount--)
    {
        printf("%d\t", iCount);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: \n");
    scanf("%d", &iValue1);

    printf("Enter ending point: \n");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}