#ifndef _MUSICSTRUCT_H_
#define _MUSICSTRUCT_H_


#define MusicName 20
#define MusicFile 20
#define MusicNum  3
#define SoleBacks 3

typedef struct Music{
    char *Mp3;
    char *Path;
    char *SoB[SoleBacks];
}Music;


#endif