// accept n numbers from user and accept one another number as NO return index of last occurrence of that NO

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Check(int Arr[], int iSize,int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }

    return iCnt;
}

int main()
{
    int iCnt = 0, iSize = 0,iNo=0;
    int iRet =0;

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

    printf("Enter the element you want to search\n");
    scanf("%d",&iNo);
    iRet = Check(ptr, iSize,iNo);
    printf("index of %d is %d\n",iNo,iRet);
    free(ptr);

    return 0;
}