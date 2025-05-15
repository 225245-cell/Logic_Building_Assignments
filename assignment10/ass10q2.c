// 1. Write a program which accept number from user and return the count of odd digits
 
 #include<stdio.h>

 int CountOdd(int iNo)
 {
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iDigit = 0, iCnt = 0 , iOddCnt =0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit) % 2 != 0)
        {
            iOddCnt++;
        }
        iNo = iNo / 10;

    }
    return iOddCnt;
 }
 int main()
 {
    int iValue = 0, iRet = 0;
    printf("Enter the Number :" );
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("%d",iRet);

    return 0;
 }