//Accept number from user and display below pattern.
//Input: 4
//Output: # 1 # 2 # 3 # 4 #
#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("#\t%d\t*\t", iCount);
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