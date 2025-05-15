//Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
#include<stdio.h>
#define KM 1000
int KMtoMETER(int iNo)
{
    return iNo * KM;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the distance ");
    scanf("%d",&iValue);

    iRet=KMtoMETER(iValue);
    printf("%d KM =%d M ",iValue,iRet);
    return 0;
}