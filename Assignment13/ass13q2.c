/*Accept the rows and column form user and dispay below 
Input:  iRow=4 iCol=4
  Output: A B C D 
          a b c d 
          A B C D 
          a b c d  
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
   int i = 0,j = 0;
   char ch1='A';
   char ch2='a';
  for(i=1;i<=iRow;i++)
  {
    for( j=1,ch1='A',ch2='a';j<=iCol;j++,ch1++,ch2++)
    {
      if(i%2 == 1)
      {
        printf("%c\t",ch1);
      }
      else
      {
        printf("%c\t",ch2);
      }
    }
    printf("\n");
  }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&iValue1,&iValue2);
    
    Pattern(iValue1,iValue2);
    
    return 0;
}