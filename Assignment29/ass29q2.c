/*count small letters from file*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountSmall(char FName[])
{
    int iCnt =0,iSmallCount = 0,fd = 0, iSmall=0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    fd = open(FName, O_RDONLY );
    if(fd == -1)
    {
        printf("unable to open file\n");
        return -1;
    }
    else
    {
        while((iSmall=read(fd,Buffer,BUFFER_SIZE)) != 0)
        { 
            for(iCnt = 0;iCnt < iSmall ;iCnt++)
            {
                if(Buffer[iCnt]>='a' && Buffer[iCnt]<='z')
                {
                    iSmallCount++;
                    printf("%c\t",Buffer[iCnt]);
                }
            }
            memset(Buffer,'\0',1024);
        }
    }
    close(fd);
    return iSmallCount;
}

int main()
{
    char FileName[20] = {'\0'};
    int iRet = 0; 

    printf("Enter the filename that you want to open: ");
    scanf("%s",&FileName);

    iRet = CountSmall(FileName);


    printf("\nSmall letters are  : %d\n",iRet);
    
    return 0;
}
