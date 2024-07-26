//Write a program which accept number from user and display its table in reverse order
//Input: 2
//Output: 20 18 16 14 12 10 8 6 4 2
#include<stdio.h>

int ReverseTable(int iNo)
{
    int iCount = 0;
    int iMult = 1;

    for(iCount =10; iCount >= 1; iCount--)
    {
        iMult = iCount * iNo;
        printf("%d \n", iMult);
    }
    return 0;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = ReverseTable(iValue);
    printf("%d", iRet);

    return 0;
}