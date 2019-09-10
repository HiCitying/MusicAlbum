#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define PATH "./abc.txt"
#define DES "./def.txt"
#define MaxSize 10

void Copy(char *src, char *dest)
{
    char buf[MaxSize];
    int fd=open(src,O_RDWR);
    int wfd=open(dest,O_WRONLY|O_CREAT|O_TRUNC,0664);

    if(fd<0)
    {
        printf("oerror\n");
    }
    if(wfd<0)
    {
        printf("werror\n");
    }
    int ret=MaxSize;
    lseek(fd,0,SEEK_SET);
    lseek(wfd,0,SEEK_SET);
    while (ret==MaxSize)
    {
        ret=read(fd,buf,MaxSize);
        write(wfd,buf,MaxSize);
    }

    close(fd);
    close(wfd);


}

int main()
{
    Copy(PATH,DES);
    return 0;
}

