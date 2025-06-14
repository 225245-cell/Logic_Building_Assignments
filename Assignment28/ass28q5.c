/*writ the application which accept file name from user 
and string from user and write that string t end of file*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h> 

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};
    char Buffer[100] = {'\0'};
    int iRet = 0;

    printf("Enter the filename: ");
    scanf("%s",&Fname);

    printf("Enter string: ");
    scanf(" %[^\n]s",Buffer);

    fd = open(Fname, O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        iRet = write(fd, Buffer, strlen(Buffer));
        printf("%d bytes written successfully\n", iRet);
    }

    close(fd);
    
    return 0;
}
