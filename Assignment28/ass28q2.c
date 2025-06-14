//writ the application which accept file name from user and create that file. 
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20]= {'\0'};

    printf("Enter the filename to create: ");
    scanf("%s",&Fname);
    
    fd = creat(Fname,0.777);

    if(fd==-1)
    {
        printf("unable to open file\n");
        return -1;
    }
    else
    {
        printf("file is created successfully\n",fd);
    }
    
    return 0;
}