//accept n from user and return frequncy of even numbers


#include <stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength)
{
    int iFreq = 0, iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iFreq++;
        }
    }

    return iFreq;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;

    printf("\nEnter the no :");
    scanf("%d", &iSize);

    int *ptr = NULL;
    ptr = (int *)malloc(iSize * sizeof(int));

    if (NULL == ptr)
    {
        printf("\nUnable to allocate memory");
        return -1;
    }

    printf("\nEnter the Numbers:");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\n%dth element:",(iCnt+1));
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Frequency(ptr, iSize);
    printf("\nThere are %d Even elements in array ",iRet);
    return 0;
}