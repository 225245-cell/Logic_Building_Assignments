/*Write a program which accept one number from user and print that number of even numbers on screen.
Input: 7
Output:2 4 6 8 10 12 14 
*/
#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    for(int i=1;i<=iNo;i++)
    {
        printf("%d ",i*2);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}