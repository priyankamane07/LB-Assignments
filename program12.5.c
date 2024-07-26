//Accept number from user and display below pattern.
//Input: 8
//Output: 2 4 6 8 10 12 14 16
#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <=(iNo * 2); iCount++)
    {
        if(iCount % 2 == 0)
        {
            printf("%d\t", iCount);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}