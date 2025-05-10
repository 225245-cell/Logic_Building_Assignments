/*accept two numbers from user and display first number in second numbers of times
Input: 12 5 
Output: 12 12 12 12 12  
*/
#include<stdio.h>
int Display(int iNo, int iFrequency)
{
    int i = 0;
    for (i = 1; i <= iFrequency; i++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    printf("Enter Number of Frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}
