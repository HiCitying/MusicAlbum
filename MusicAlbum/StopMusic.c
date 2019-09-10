#include "StopMusic.h"
extern int flag;
void Stop(pid_t pid)
{
    //暂停
    if(pid>0)
    {
        kill(pid,19);
        flag=-1;
    }
}

void Continue(pid_t pid)
{
    //继续
    if(pid>0)
    {
        kill(pid,18);
        flag=1;
    }
}
