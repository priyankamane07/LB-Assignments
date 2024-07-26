//Write a program which accept range from user and display all even numbers in between that range
#include<stdio.h>

int RangeDisplayEven(int iNo1, int iNo2)
{
    int iCount = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid range");
    }
    
    for(iCount = iNo1; iCount <= iNo2; iCount++)
    {
        if(iCount % 2 == 0)
        {
            printf("%d\t", iCount);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: \n");
    scanf("%d", &iValue1);

    printf("Enter ending point: \n");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}