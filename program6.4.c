//Write a program which accept number from user and display its table
//Input: 2
//Output: 2 4 6 8 10 12 14 16 18 20
#include<stdio.h>

int Table(int iNo)
{
    int iCount = 0;
    int iMult = 1;

    for(iCount = 1; iCount <= 10; iCount++)
    {
        iMult = iNo * iCount;
        printf("%d\t", iMult);
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = Table(iValue);
    printf("%d", iRet);

    return 0;
}