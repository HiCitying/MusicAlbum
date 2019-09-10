#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

#include "MusicStruct.h"
#include "TouchScreen.h"
#include "ChangeMusic.h"
#include "CBackGr.h"
#include "GetIndex.h"
#include "StopMusic.h"
#include "ThreadFunction.h"
#include "KillThread.h"
#include "ClearScreen.h"

#define Start "./Picture/start.bmp"


extern struct Music music[MusicNum];
extern int flag;
int Index=-1;
int main(void)
{
    int Tc;
    pid_t pid=-1;

    ////////////////////////////
    pthread_t thread1,thread2;
    int pth1,ph2;
    memset(&thread1, 0, sizeof(thread1));
    if((pth1 = pthread_create(&thread1, NULL, thread_01, NULL)) != 0)
        printf("Thread1 Create Error\n");
    else
        printf("Thread1 Create Success\n");

    memset(&thread2, 0, sizeof(thread2));
    if((pth1 = pthread_create(&thread2, NULL, thread_02, NULL)) != 0)
        printf("Thread2 Create Error\n");
    else
        printf("Thread2 Create Success\n");


    ////////////////////////////
    ChangeBack(Start);
    while (1)
    {
        Tc=TouchScreen();
        switch (Tc)
        {
            case 1:
                Index=GetIndex(Index+1);
                ChangeBack(music[Index].Path);
                pid=ChangeMusic(pid,music[Index].Mp3);
				Toword(Index);
                break;
            case 2:
                Index=GetIndex(Index-1);
                ChangeBack(music[Index].Path);
                pid=ChangeMusic(pid,music[Index].Mp3);
				Toword(Index);
                break;
            case 3:
                Stop(pid);
                break;
            case 4:
                Continue(pid);
                break;
            default:
                break;
        }
   }

    return 0;
}