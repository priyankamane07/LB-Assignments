//Write a program which accept number from user and print that number of $ and * on screen
//Input: 3
//Output: $ * $ * $ * 
#include<stdio.h>

void pattern(int iNo)
{
    int iCount = 0;
    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    pattern(iValue);
    
    return 0;
}