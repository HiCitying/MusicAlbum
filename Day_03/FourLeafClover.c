#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>

int Round_01(int x,int y)
{
    int x1=(x-200)*(x-200);
    int y1=(y-100)*(y-100);
    int s=x1+y1;
    if(s<=10000)
        return 1;
    return 0;
}
int Round_02(int x,int y)
{
    int x1=(x-200)*(x-200);
    int y1=(y-300)*(y-300);
    int s=x1+y1;
    if(s<=10000)
        return 1;
    return 0;
}
int Round_03(int x,int y)
{
    int x1=(x-100)*(x-100);
    int y1=(y-200)*(y-200);
    int s=x1+y1;
    if(s<=10000)
        return 1;
    return 0;
}
int Round_04(int x,int y)
{
    int x1=(x-300)*(x-300);
    int y1=(y-200)*(y-200);
    int s=x1+y1;
    if(s<=10000)
        return 1;
    return 0;
}


int main()
{
    int flag1=-1;
    int flag2=-1;
    int flag3=-1;
    int flag4=-1;
    //1.打开文件
    int lcd_fd = open("/dev/fb0",O_RDWR);
    if(lcd_fd < 0)
    {
        perror("open lcd_fd error\n");
    }
    int *p=mmap(NULL,800*480*4,PROT_READ | PROT_WRITE, MAP_SHARED,lcd_fd,0);
    if(p == MAP_FAILED)
    {
        perror("mmap erorr\n");
    }

    //lseek(p,0,SEEK_SET);

    int x,y;
    for(x=0;x<480;x++)
    {
        //usleep(1);
        for(y=0;y<800;y++)
        {
            if(x<0||x>480||y<0||y>800)
            {
                printf("Segment default\n");
            } else
            {
                flag1=Round_01(x,y);
                //printf("%d",flag1);
                flag2=Round_02(x,y);
                //printf("%d\n",flag2);
                flag3=Round_03(x,y);
                //printf("%d\n",flag3);
                flag4=Round_04(x,y);
                //printf("%d\n",flag4);
                if((flag1+flag2+flag3+flag4)>=2)
                {
                    *(p+x*800+y)=0x0000ff;
                }


            }
        }
    }



    munmap(p,800*480*4);
    close(lcd_fd);

}