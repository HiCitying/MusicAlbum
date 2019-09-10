#include "KillThread.h"
extern int flag;

void Kill_Thread(pthread_t pthead)
{
    int pthread_kill_err;
    pthread_kill_err = pthread_kill(pthead,0);

    if(pthread_kill_err == ESRCH)
    {
        printf("ID is %d Thread is not exist\n",(unsigned int)pthead);
    }else if(pthread_kill_err == EINVAL){
        printf("Illegal signal\n");
    }else{
        printf("ID is %d Thread is exst\n",(unsigned int)pthead);
        //flag=-1;
    }
}