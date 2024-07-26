//Accept two numbers from user and display first number in second number of times

#include<stdio.h>

int Display(int iNo1, int iNo2)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\t", iNo1);
    }
}

int main()
{
    int iValue1 = 0, iCount = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue1);

    printf("Enter frequency: \n");
    scanf("%d", &iCount);

    Display(iValue1, iCount);


    return 0;
}