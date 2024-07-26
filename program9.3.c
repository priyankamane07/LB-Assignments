//Write a program which accept range from user and return addition of all numbers in between that range.
//range should contains positive numbers only
#include<stdio.h>

int RangeSum(int iNo1, int iNo2)
{
    int iCount = 0, iSum = 0;

    if(iNo1 < 0 || iNo2 < 0)
    {
        printf("Invalid range");
    }
    
    if(iNo1 > iNo2)
    {
        printf("Invalid range");
    }
    
    for(iCount = iNo1; iCount <= iNo2; iCount++)
    {
        iSum = iSum + iCount;
    }
    return iSum;
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: \n");
    scanf("%d", &iValue1);

    printf("Enter ending point: \n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    printf("Addition is: %d", iRet);

    return 0;
}