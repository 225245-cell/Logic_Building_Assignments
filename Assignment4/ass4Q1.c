//write the program accept the number from user to calculate multiplication of factors of given number 
#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iMult = iMult * iCnt;

        }
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("Multiplication of factor of %d is %d",iValue,iRet);

    return 0;


}