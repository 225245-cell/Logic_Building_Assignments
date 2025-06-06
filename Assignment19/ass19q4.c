// accept the n from user return frequency of 11 from it 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int Check(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iCount++;
        }
        
    }
    return iCount;
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
    iRet = Check(ptr, iSize);
    printf("%d",iRet);
    free(ptr);
    return 0;
}