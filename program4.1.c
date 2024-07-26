//Accept number from user and display its multiplication of factors
#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);
    printf("Multiplication of factors: %d", iRet);

    return 0;
}