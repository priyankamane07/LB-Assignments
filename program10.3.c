//Write a program which accept number from user and count frequency of 2 in it.
#include<stdio.h>

int CountTwo(int iNo)
{
    int iCount = 0, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCount = iCount + 1;
            //printf("%d", iCount);
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

    iRet = CountTwo(iValue);
    printf("%d", iRet);

    return 0;
}