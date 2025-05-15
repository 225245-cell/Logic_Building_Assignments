// 1. Write a program which accept number from user and return the count of even digits
 
 #include<stdio.h>

 int CountEven(int iNo)
 {
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iDigit = 0, iCnt = 0 , iEvenCnt =0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit) % 2 == 0)
        {
            iEvenCnt++;
        }
        iNo = iNo / 10;

    }
    return iEvenCnt;
 }
 int main()
 {
    int iValue = 0, iRet = 0;
    printf("Enter the Number :" );
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf("%d",iRet);

    return 0;
 }