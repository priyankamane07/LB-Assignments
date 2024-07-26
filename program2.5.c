//Accept number from user and check whether number is even or odd
#include<stdio.h>
#include<stdbool.h>

bool oddEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool iRet = false;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = oddEven(iValue);

    if(iRet == true)
    {
        printf("%d is even number\n", iValue);
    }
    else
    {
        printf("%d is odd number\n", iValue);
    }

    return 0;
}