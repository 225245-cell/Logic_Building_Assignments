//accept n from user and return difference of frequncy of even numbers and odd numbers

#include <stdio.h>
#include <stdlib.h>
int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, EvenCnt = 0, OddCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            EvenCnt++;
        }
        else
        {
            OddCnt++;
        }
    }
    return (EvenCnt - OddCnt);
}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("\nEnter the no of elements:");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated");
        return -1;
    }
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter the element %d:", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }
    iRet = Frequency( ptr,iSize);

    printf("The difference beteen the frequency of even and odd numbers is %d", iRet);
    free(ptr);
    return 0;
}