#include "ThreadFunction.h"
#include "MusicStruct.h"
#include "CBackGr.h"


extern int Index;
extern struct Music music[MusicNum];
extern int flag;

void *thread_01()
{

    int i;
    flag=-1;
    srand((unsigned)time(NULL));
    while (1)
    {
        i=rand()%SoleBacks;
        sleep(3);
        if(flag==1)
        {
            ChangeBack(music[Index].SoB[i]);
            Toword(Index);
        }
    }
}

void *thread_02()
{
    while (1)
    {

        ClearScreen(0,0,800,5,0x00ff0000);
        ClearScreen(475,0,800,5,0x00ff0000);
        ClearScreen(0,0,5,480,0x00ff0000);
        ClearScreen(0,795,5,480,0x00ff0000);
        sleep(1);
//        ClearScreen(0,195,5,480,0x00ff0000);
//        sleep(1);
//        ClearScreen(115,0,195,5,0x00ff0000);
//        sleep(1);
//        ClearScreen(235,0,195,5,0x00ff0000);
//        sleep(1);
//        ClearScreen(355,0,195,5,0x00ff0000);
//        sleep(1);

        ClearScreen(0,0,800,5,0x00FF7F00);
        ClearScreen(475,0,800,5,0x00FF7F00);
        ClearScreen(0,0,5,480,0x00FF7F00);
        ClearScreen(0,795,5,480,0x00FF7F00);
        sleep(1);
//        ClearScreen(0,195,5,480,0x00FF7F00);
//        sleep(1);
//        ClearScreen(115,0,195,5,0x00FF7F00);
//        sleep(1);
//        ClearScreen(235,0,195,5,0x00FF7F00);
//        sleep(1);
//        ClearScreen(355,0,195,5,0x00FF7F00);
//        sleep(1);



        ClearScreen(0,0,800,5,0x00FFFF00);
        ClearScreen(475,0,800,5,0x00FFFF00);
        ClearScreen(0,0,5,480,0x00FFFF00);
        ClearScreen(0,795,5,480,0x00FFFF00);
        sleep(1);
//        ClearScreen(0,195,5,480,0x00FFFF00);
//        sleep(1);
//        ClearScreen(115,0,195,5,0x00FFFF00);
//        sleep(1);
//        ClearScreen(235,0,195,5,0x00FFFF00);
//        sleep(1);
//        ClearScreen(355,0,195,5,0x00FFFF00);
//        sleep(1);


        ClearScreen(0,0,800,5,0x0000FF00);
        ClearScreen(475,0,800,5,0x0000FF00);
        ClearScreen(0,0,5,480,0x0000FF00);
        ClearScreen(0,795,5,480,0x0000FF00);
        sleep(1);
//        ClearScreen(0,195,5,480,0x0000FF00);
//        sleep(1);
//        ClearScreen(115,0,195,5,0x0000FF00);
//        sleep(1);
//        ClearScreen(235,0,195,5,0x0000FF00);
//        sleep(1);
//        ClearScreen(355,0,195,5,0x0000FF00);
//        sleep(1);


        ClearScreen(0,0,800,5,0x0000FFFF);
        ClearScreen(475,0,800,5,0x0000FFFF);
        ClearScreen(0,0,5,480,0x0000FFFF);
        ClearScreen(0,795,5,480,0x0000FFFF);
        sleep(1);
//        ClearScreen(0,195,5,480,0x0000FFFF);
//        sleep(1);
//        ClearScreen(115,0,195,5,0x0000FFFF);
//        sleep(1);
//        ClearScreen(235,0,195,5,0x0000FFFF);
//        sleep(1);
//        ClearScreen(355,0,195,5,0x0000FFFF);
//        sleep(1);



        ClearScreen(0,0,800,5,0x000000FF);
        ClearScreen(475,0,800,5,0x000000FF);
        ClearScreen(0,0,5,480,0x000000FF);
        ClearScreen(0,795,5,480,0x000000FF);
        sleep(1);
//        ClearScreen(0,195,5,480,0x000000FF);
//        sleep(1);
//        ClearScreen(115,0,195,5,0x000000FF);
//        sleep(1);
//        ClearScreen(235,0,195,5,0x000000FF);
//        sleep(1);
//        ClearScreen(355,0,195,5,0x000000FF);
//        sleep(1);



        ClearScreen(0,0,800,5,0x008B00FF);
        ClearScreen(475,0,800,5,0x008B00FF);
        ClearScreen(0,0,5,480,0x008B00FF);
        ClearScreen(0,795,5,480,0x008B00FF);
        sleep(1);
//        ClearScreen(0,195,5,480,0x008B00FF);
//        sleep(1);
//        ClearScreen(115,0,195,5,0x008B00FF);
//        sleep(1);
//        ClearScreen(235,0,195,5,0x008B00FF);
//        sleep(1);
//        ClearScreen(355,0,195,5,0x008B00FF);
//        sleep(1);
    }
}