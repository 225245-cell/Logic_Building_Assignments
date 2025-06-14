//writ the application which accept file name from user and open that file in read mode 
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;//file description
    char Fname[20]= {'\0'};

    printf("Enter the filename that you want to open: ");
    scanf("%s",&Fname);
    
    fd = open(Fname,O_RDONLY);

    if(fd==-1)
    {
        printf("unable to open file\n");
        return -1;
    }
    else
    {
        printf("file is successfully open in read mode\n",fd);
    }
    
    return 0;
}