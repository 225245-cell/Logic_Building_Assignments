/* accept file name from user and one count from user and read that number
of character from starting position*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h> 
void DisplayN(char Fname[],int iSize)
{
    int iRet = 0,fd = 0;
    char Buffer[20]= {'\0'};
    fd = open(Fname, O_RDONLY );
    if(fd == -1)
    {
        printf("unable to open file\n");
    }
    else
    {
        iRet = read(fd,Buffer,iSize);
        
        printf("%d bytes gets reads successfully\n",iRet);
        
        printf("data from file is : %s\n",Buffer);
    }

    close(fd);

}

int main()
{
    int fd = 0;
    char FileName[20] = {'\0'};
    char Buffer[50] = {'\0'};
    int iRet = 0;
    int iRead = 0;

    printf("Enter the filename that you want to open: ");
    scanf("%s",&FileName);

    printf("Enter how many characters you want to read: ");
    scanf("%d",&iRead);

    DisplayN(FileName,iRead);
    return 0;
}