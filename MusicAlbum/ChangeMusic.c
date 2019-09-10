#include "ChangeMusic.h"
extern int flag;
pid_t ChangeMusic(pid_t id, char *path)
{
    flag=1;
    pid_t pid;
    if(id!=-1)
    {
        kill(id,9);
    }
    if((pid=fork())==0){
        execlp("madplay","madplay",path,NULL);
        //printf("111111111111");
    } else{
        printf("Mp3 Fork error\n");
    }
    return pid;

}