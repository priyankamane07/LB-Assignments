/* Accept number of rows and number of columns from user and display below pattern.
Input:      iRow = 3        iCol = 4

output:     1  2   3   4
            5  6   7   8 
            9  10  11  12
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iCol; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and number of columns: \n");
    scanf("%d %d", &iValue1, &iValue2);

    Display(iValue1, iValue2);

    return 0;
}