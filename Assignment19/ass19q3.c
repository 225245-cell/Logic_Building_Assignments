// check whether 11 is present or not 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool Check(int Arr[], int iLength)
{
    int iCnt = 0;
    bool found = false;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            found = true;
            break;
        }
    }
    return found;
}
int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = false;
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
    bRet = Check(ptr, iSize);
    if (true == bRet)
    {
        printf("\n11 is present in the array");
    }
    else
    {
        printf("\n11 is not present in the array");
    }
    free(ptr);
    return 0;
}