//accept nuber from user and check whether numver is even or odd
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
  if((iNo % 2) == 0)
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if (bRet == TRUE)
    {
        printf(" %d Number is Even...\n",iValue);
    }
    else
    {
        printf("%d Number is Odd ..\n" ,iValue);
    }

    return 0;

}