//write the program accept the number from user and find Odd factorial of given number 
//Time Complexity of this program is O(n)
#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iOddFact = 1;

    if( iNo< 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2) != 0)
        {
            iOddFact= iOddFact * iCnt;
        }
    }
    return iOddFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Oddfactorial of %d is %d",iValue,iRet);

    return 0;


}