#include <stdio.h>
#include <stdlib.h>
int Difference(int Arr[], int iLength)
{
    int iCnt = 0, EvenSum = 0, OddSum = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            EvenSum = EvenSum + Arr[iCnt];
        }
        else
        {
            OddSum = OddSum + Arr[iCnt];
        }
    }
    return (EvenSum - OddSum);
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    printf("\nEnter the no of elements:");
    scanf("%d", &iSize);

    int *ptr = NULL;
    ptr = (int *)malloc(iSize * sizeof(int));
    if (NULL == ptr)
    {
        printf("Unable to allocate the memory:\n");
        return -1;
    }
    printf("\nEnter Elements:");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter the %d element:", (iCnt + 1));
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Difference(ptr, iSize);
    printf("\nThe Difference is %d", iRet);
    free(ptr);

    return 0;
}