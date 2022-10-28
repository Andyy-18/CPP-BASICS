//open system call
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main(){
    int fd = open("G:\DeskTop\hello.txt",O_RDONLY); //here we have to provide the file location inside double quotes
    printf("%d",fd);

    if (fd == -1)
    {
        printf("can't print fiile");
        exit(0);

    }
    else
    {
        printf("\n file opened suceesfully");
    }
    
    close(fd);
    if (fd == -1)
    {
        printf("can't close file");
        exit(0);

    }
    else
    {
        printf("\n file closed succesfuly")
    }

    return 0;
    
    
}
