//Write a program which accepts number from user and print even factors of that number
#include<stdio.h>

int evenFact(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            if(iCnt % 2 == 0)
            {
                printf("%d\n", iCnt);
            }
        }
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = evenFact(iValue);

    printf("%d\n", iRet);

    return 0;
}