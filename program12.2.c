//Accept number from user and display below pattern
//Input: 5
//Output: 5 # 4 # 3 # 2 # 1 #
#include<stdio.h>

int DisplayPattern(int iNo)
{
    int iCount = 0;

    for(iCount = iNo; iCount >= 1; iCount--)
    {
        printf("%d\t#\t", iCount);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    DisplayPattern(iValue);

    return 0;
}