/*writ the application which accept file name from user and 
reads all data from that file and displaycontent on screen*/ 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#define BUFFER_SIZE 1024
#include<fcntl.h> 

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'}; 
    int iRet = 0;

    printf("Enter the filename: ");
    scanf("%s",&Fname);
    
    fd = open(Fname, O_RDONLY );
    if(fd == -1)
    {
        printf("unable to open file\n");
        return -1;
    }
    else
    {
        while((iRet=read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            write(1,Buffer,iRet);
            
            memset(Buffer,'\0',BUFFER_SIZE);
        }
    }
    
    return 0;
}
