//Write a program to find multiplication of even number up to number
//Input: 5
//Output: 8     (2 * 4)
#include<stdio.h>

int EvenMult(int iNo)
{
    int iCount = 0;
    int iMult = 1;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        if(iCount % 2 == 0)
        {
            printf("%d", iCount);
            iMult = iMult * iCount;
            printf("%d", iMult);
        }
        return iMult;
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = EvenMult(iValue);
    printf("%d", iRet);

    return 0;
}