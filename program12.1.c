//Accept number from user and display below pattern
//Input: 5
//Output: A B C D E
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = 0; iCount <= iNo; iCount++)
    {
        printf("%c \n", 'A' + iCount);
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