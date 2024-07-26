//Accept amount in US doller and return its corresponding value in Indian currency
//Consider 1$ as 70 rupees
//Input: 10
//Output: 700
#include<stdio.h>

int DollerToCurrency(int iNo)
{

    printf("%d", iNo * 70);
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    DollerToCurrency(iValue);

    return 0;
}