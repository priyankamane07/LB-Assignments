//Write a program which accept number from user and return the count of odd digits.
#include<stdio.h>

int OddCount(int iNo)
{
    int iCount = 0, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = OddCount(iValue);
    printf("%d", iRet);

    return 0;
}