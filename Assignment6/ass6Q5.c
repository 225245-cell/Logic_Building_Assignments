//write the program accept the number from user and Display table in reverse order
//Time Complexity of this program is O(10)
#include<stdio.h>
void TableRev(int iNo)
{
    int iCnt = 0;

    if( iNo< 0)
    {
        iNo = -iNo;
    }
    
    printf("Table of %d in reverse order is : ",iNo);
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        printf("%d ",iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;


}