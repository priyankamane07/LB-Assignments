//Write a program which accept N and print first 5 multiple of N
//Input: 4
//Output: 4 8 12 16 20

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCount = 0;
    int iMult = 0;

    for(iCount = 1; iCount <= 5; iCount++)
    {
       iMult = iCount * iNo;
       printf("%d\t", iMult); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}