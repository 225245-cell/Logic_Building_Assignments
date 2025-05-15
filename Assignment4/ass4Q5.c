//write the program accept the number from user and return difference between summation of factors and non-factors 
#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum=0;


    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum=iNonFactSum + iCnt;
        }
    }

    return (iFactSum - iNonFactSum);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference between summnation of all factors and Non-Factors of %d is: %d\n",iValue,iRet);
    
    return 0;
}