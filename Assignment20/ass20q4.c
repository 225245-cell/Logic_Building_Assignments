// accept n numbers from user and accept range Display all elements from that range 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Display(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;
    for (iCnt =0; iCnt <iSize; iCnt++)
    {
        if ((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt = 0, iSize = 0, iNo = 0, iStart = 0, iEnd = 0;

    printf("Enter the number of elements you want to store in an array:\n");
    scanf("%d", &iSize);

    int *ptr = NULL;

    ptr = (int *)malloc(iSize * sizeof(int));

    if (NULL == ptr)
    {
        printf("\nUnable to allocate memory");
        return -1;
    }
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the %d element:\n", (iCnt + 1));
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter the starting point\n");
    scanf("%d", &iStart);
    printf("Enter the Ending point\n");
    scanf("%d", &iEnd);
    Display(ptr,iSize,iStart,iEnd);
    free(ptr);

    return 0;
}