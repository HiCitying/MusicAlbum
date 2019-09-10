cc=arm-linux-gcc
MusicAlbum=Main
LDFLAGS=-lpthread

#.PHONY:all
#all:$(MusicAlbum)



$(MusicAlbum):Main.c
	$(cc) -o $@ $^ $(LDFLAGS)

.PHONY:clean
clean:
	rm -f $(MusicAlbum)
