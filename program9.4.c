//Write a program which accept range from user and return addition of all even numbers in between that range
//Range should contains positive numbers only
#include<stdio.h>

int RangeSumEvent(int iNo1, int iNo2)
{
    int iCount = 0, iSum = 0;

    for(iCount = iNo1; iCount <= iNo2; iCount++)
    {
        if(iCount % 2 == 0)
        {
            iSum = iSum + iCount;
        }
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

    iRet = RangeSumEvent(iValue1, iValue2);
    printf("Addition is: %d", iRet);
    
    return 0;
}