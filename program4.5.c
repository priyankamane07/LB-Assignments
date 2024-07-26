//Accept number from user and return difference between summation of all its factors and non factors
#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iFactSum = 0, inonFactSum = 0, idiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            inonFactSum = inonFactSum + iCnt;
        }

        idiff = iFactSum - inonFactSum;
    } 
    return idiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("Difference is:\n%d", iRet); 

    return 0;
}