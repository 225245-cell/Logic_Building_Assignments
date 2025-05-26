/*Accept the rows and column form user and dispay below 
Input:  iRow=6 iCol=6
  Output: 
          1 2 3 4 5 6  
          1 2       6 
          1   3     6
          1     4   6
          1       5 6
          1 2 3 4 5 6

*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        printf("invalid input");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol;j++)
        {
            if(i==j || i==1|| j==1 || i==iRow || j==iCol)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
