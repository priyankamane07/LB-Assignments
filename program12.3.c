//Accept number from user and display below pattern
//Input: 5
//Output: 1 * 2 * 3 * 4 * 5 *
#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("%d\t*\t", iCount);
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