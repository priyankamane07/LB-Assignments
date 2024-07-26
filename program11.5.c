//Write a program which accepts number from user and 
//return difference between summation of even digits and summation of odd digits
#include<stdio.h>

int SumDifference(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0, iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iDiff = iEvenSum - iOddSum;

        iNo = iNo / 10;
    }
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = SumDifference(iValue);
    printf("%d", iRet);

    return 0;
}