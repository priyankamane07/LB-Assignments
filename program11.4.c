//Write a program which accept number from user and return multiplication of all digits.
#include<stdio.h>

int MultOfDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = MultOfDigits(iValue);
    printf("%d", iRet);

    return 0;
}