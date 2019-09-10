#ifndef _CHANGEMUSIC_H_
#define _CHANGEMUSIC_H_


#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>


/*
 * id     歌曲编号
 * path   歌曲文件路径
 * return 一个fork进程
 */
pid_t ChangeMusic(int id,char *path);
//遥远的你 你曾是少年 房间


							
#endif