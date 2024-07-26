//Write a program which accept number fromm user and if number is less than 50 then print small, 
//if it is greater than 50 and less than 100 then print medium, 
//if it is greater than l00 then print large

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("small\n");
    }
    else if(iNo >50 && iNo < 100)
    {
        printf("medium\n");
    }
    else if(iNo > 100)
    {
        printf("large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    Number(iValue);
}