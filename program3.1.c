//Write a program which accept one number from user and print that number of even numbers on svreen
//Input: 7
//Output: 2 4 6 8 10 12 14
#include<stdio.h>

int evenStar(int iNo)
{
    int iCnt = 0;
    int iEven = 0;

    while(iEven <= iNo)
    {
        for(iCnt = 1; iCnt >= 0; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                printf("%d\t", iCnt);
                iEven = iEven + 1;
            }
        }
        
    }    
    //return iNo;
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    evenStar(iValue);

    return 0;
}