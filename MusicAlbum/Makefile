cc=arm-linux-gcc
MusicAlbum=Main
LDFLAGS=-lpthread

.PHONY:all
all:$(MusicAlbum)

$(MusicAlbum):Main.c
	$(cc) -o $@ $^ $(LDFLAGS) MusicStruct.c ChangeMusic.c TouchScreen.c CBackGr.c GetIndex.c

.PHONY:clean
clean:
	rm -f $(MusicAlbum)
