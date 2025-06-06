#include <stdio.h>
#include <stdlib.h>
void Display(int Arr[], int iLength)
{
    int iCnt = 0, EvenSum = 0, OddSum = 0;
    printf("The elements Divisible by 5 and Even are :\n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 5) == 0 && (Arr[iCnt] % 3) == 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0;
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

    Display(ptr, iSize);
    free(ptr);
    return 0;
}