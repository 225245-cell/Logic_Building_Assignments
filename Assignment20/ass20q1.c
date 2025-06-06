// accept n numbers from user and accept one another number as NO check whether no is present of Not

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check(int Arr[], int iSize,int iNo)
{
    int iCnt=0;
    bool bFound=false;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            bFound=true;
            break;
        }
    }

    return bFound;
}

int main()
{
    int iCnt = 0, iSize = 0,iNo=0;
    bool bRet = false;

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
    bRet = Check(ptr, iSize,iNo);
    if (bRet == true)
    {
        printf("%d is present in array\n",iNo);
    }
    else
    {
        printf("%d is not present in array\n",iNo);
    }
    free(ptr);

    return 0;
}