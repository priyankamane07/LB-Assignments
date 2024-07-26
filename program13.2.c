//Accept number of rows and number of columns from user and display below pattern.
//Input: iRow = 4   iCol = 3
//Output: 
/*
    1 2 3
    1 2 3
    1 2 3
    1 2 3
*/
#include<stdio.h>


void Display(int iRow, int iCol)
{
    int iCount = 0, jCount = 0;

    for(iCount = 1; iCount <= iRow; iCount++)
    {
        for(jCount = 1; jCount <= iCol; jCount++)
        {
            printf("%d\t", jCount);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns: \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}