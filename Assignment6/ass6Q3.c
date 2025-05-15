//write the program accept the number from user and find factorial of given number 
//Time Complexity of this program is O(n)
#include<stdio.h>
int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if( iNo< 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact= iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("factorial of %d is %d",iValue,iRet);

    return 0;


}