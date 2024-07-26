//Write a program to find factorial of given number
//Input: 5
//Output: 120  (5*4*3*2*1)
#include<stdio.h>

int Factorial(int iNo)
{
    int iCount = 0;
    int iFact = 1;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        iFact = iFact * iCount;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("%d", iRet);

    return 0;
}