 // 1. Write a program which accept number from user and display its digits in reverse order.

 
 #include<stdio.h>

 void DisplayDigit(int iNo)
 {
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iDigit = 0;
    int iCnt =0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;

    }
 }
 int main()
 {
    int iValue = 0;
    printf("Enter the Number :" );
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
 }