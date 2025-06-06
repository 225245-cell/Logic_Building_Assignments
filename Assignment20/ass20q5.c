// accept n numbers from user and return prodcut of all numbers

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Product(int Arr[], int iSize)
{
    int iCnt=0,iProd=1;
    for(iCnt=(iSize-1);iCnt>=0;iCnt--)
    {
        if((Arr[iCnt]%2) != 0)
        {
            iProd*=Arr[iCnt];
            
        }
    }
    if(iProd == 1)
    {
        iProd=0;
    }

    return iProd;
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

    
    iRet = Product(ptr, iSize);
    printf("Product oF all Odd Elements  is %d\n",iRet);
    free(ptr);

    return 0;
}