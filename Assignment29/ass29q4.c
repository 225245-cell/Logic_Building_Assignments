/*accept file name from user and one character  and count occurence of that characte*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountChar(char FName[],char Ch )
{
    int iCnt =0,iCharCount = 0,fd = 0, iBet=0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    fd = open(FName, O_RDONLY );
    if(fd == -1)
    {
        printf("unable to open file\n");
        return -1;
    }
    else
    {
        while((iBet=read(fd,Buffer,BUFFER_SIZE)) != 0)
        { 
            for(iCnt = 0;iCnt < iBet ;iCnt++)
            {
                if(Buffer[iCnt] == Ch)
                {
                    iCharCount++;
                    printf("%c\n",Buffer[iCnt]);
                }
            }
            memset(Buffer,'\0',1024);
        }
    }
    return iCharCount;
}

int main()
{
    char Fname[20] = {'\0'};
    int iRet = 0;
    char cValue = '\0'; 

    printf("Enter the filename that you want to open: ");
    scanf("%s",&Fname);

    printf("Enter the character to search: ");
    scanf(" %c",&cValue);

    iRet = CountChar(Fname,cValue);


    printf("%c is %d times occur \n",cValue,iRet);
    
    return 0;
}
