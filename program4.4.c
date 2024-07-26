//Accect number from user and return summation of all its non factors
#include<stdio.h>

int nonFactSum(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = nonFactSum(iValue);
    printf("Summation of non factors:\n%d", iRet);

    return 0;
}