/* Accept the number from user and display below pattern
Input: 5
Output: A B C D E
Time Complexity=O(N)
*/
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%c\t",'A' + iCnt-1);
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}





