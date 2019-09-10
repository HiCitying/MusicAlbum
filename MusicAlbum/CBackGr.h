#ifndef _CBACKGR_H_
#define _CBACKGR_H_

#include <stdio.h>
#include <errno.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
//遥远的你

							
void ChangeBack(char *bmpPath);
void DrawPoint(int *py,int x, int y, int color);
//void draw_point(int x, int y, int color);
void show_word(char *word, int x, int y,int wide,int wordsize,int color,int *py);
void Brushword();
void Toword(int Id);

#endif