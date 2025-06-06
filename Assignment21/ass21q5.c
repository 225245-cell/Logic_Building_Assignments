// Accept N numbers from user and display summation of digits of each number.
#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        int iDigit=0,iSum=0,iNo=Arr[iCnt];
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iNo=iNo/10;
            iSum=iSum+iDigit;
        }
        printf("%d\t",iSum);
    }
}

int main()
{
    int iCnt = 0, iSize = 0, iNo = 0, iRet = 0;

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

    Digits(ptr, iSize);
    free(ptr);

    return 0;
}