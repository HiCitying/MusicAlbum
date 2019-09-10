#include "GetIndex.h"
#include "MusicStruct.h"
int GetIndex(int index)
{
    int _index=index;
    if(_index<0)
    {
        _index=MusicNum-1;
    } else{
        _index=_index%MusicNum;
    }
    return _index;
}