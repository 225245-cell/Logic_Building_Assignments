/*count capital letters from file*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountCapital(char FName[])
{
    int iCnt =0,iCapCount = 0,fd = 0, iCap=0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    fd = open(FName, O_RDONLY );
    if(fd == -1)
    {
        printf("unable to open file\n");
        return -1;
    }
    else
    {
        while((iCap=read(fd,Buffer,BUFFER_SIZE)) != 0)
        { 
            for(iCnt = 0;iCnt < iCap ;iCnt++)
            {
                if(Buffer[iCnt]>='A' && Buffer[iCnt]<='Z')
                {
                    iCapCount++;
                    printf("%c\t",Buffer[iCnt]);
                }
            }
            memset(Buffer,'\0',1024);
        }
    }
    close(fd);
    return iCapCount;
}

int main()
{
    char FileName[20] = {'\0'};
    int iRet = 0; 

    printf("Enter the filename that you want to open: ");
    scanf("%s",&FileName);

    iRet = CountCapital(FileName);


    printf("\nCapital letters are  : %d\n",iRet);
    
    return 0;
}
