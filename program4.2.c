//Accept number from user and display its factors in decreasing order

#include<stdio.h>

int RevFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = RevFact(iValue);

    return 0;
}