//Write a program which accept number from user and count frequency of such a digits which are less than 6.
#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);
    printf("%d", iRet);

    return 0;
}