//write the program accept the number from user and Display table
//Time Complexity of this program is O(10)
#include<stdio.h>
void Table(int iNo)
{
    int iCnt = 0;

    if( iNo< 0)
    {
        iNo = -iNo;
    }
    
    printf("Table of %d is: ",iNo);
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d ",iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;


}