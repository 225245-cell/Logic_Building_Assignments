/*count white spaces from file*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountWhite(char FName[])
{
    int iCnt =0,iWhiteCount = 0,fd = 0, iWhite=0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    fd = open(FName, O_RDONLY );
    if(fd == -1)
    {
        printf("unable to open file\n");
        return -1;
    }
    else
    {
        while((iWhite=read(fd,Buffer,BUFFER_SIZE)) != 0)
        { 
            for(iCnt = 0;iCnt < iWhite ;iCnt++)
            {
                if(Buffer[iCnt] ==' ')
                {
                    iWhiteCount++;
                }
            }
            memset(Buffer,'\0',1024);
        }
    }
    close(fd);
    return iWhiteCount;
}

int main()
{
    char FileName[20] = {'\0'};
    int iRet = 0; 

    printf("Enter the filename that you want to open: ");
    scanf("%s",&FileName);

    iRet = CountWhite(FileName);


    printf("White spaces are  : %d\n",iRet);
    
    return 0;
}
