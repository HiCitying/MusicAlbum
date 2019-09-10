#include "CBackGr.h"

unsigned char mo1[4][3*24] = {{0x00,0x00,0x00,0x00,0x00,0x78,0x38,0x1F,0xFC,0x1D,0xFE,0x30,0x1E,0xCE,0x38,0x0E,
								0xE7,0x38,0x0C,0xE7,0x70,0x00,0x7F,0xE0,0x0C,0x78,0xF0,0xFE,0x7F,0xF8,0x2E,0xE7,
								0x00,0x0F,0xC7,0x00,0x0E,0x07,0x0C,0x0F,0xFF,0xFE,0x0F,0x07,0x00,0x0E,0x77,0x38,
								0x0E,0x67,0x38,0x0E,0x67,0x38,0x1E,0xFF,0xF8,0x3F,0x60,0x38,0xF3,0xC0,0x00,0x61,
								0xFF,0xFF,0x00,0x3F,0xFC,0x00,0x00,0x00},
								{0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x60,0x1C,0xFF,0xF0,0x0E,0x40,0x00,0x0E,
								0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x18,0x01,0xFF,0xFC,0x04,0x9D,0xC0,0xFE,0x19,
								0xC0,0x2E,0x19,0xC0,0x0E,0x39,0xC0,0x0E,0x39,0xCC,0x0E,0x39,0xCC,0x0E,0x71,0xCC,
								0x0E,0x61,0xDE,0x0E,0xC1,0xFC,0x3F,0x80,0x00,0x7B,0x80,0x00,0x71,0xFF,0xFF,0x00,
								0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00},
								{0x00,0x00,0x00,0x07,0x03,0x80,0x07,0x83,0xC0,0x07,0x03,0x80,0x06,0x07,0x00,0x36,
								0x67,0x0C,0x3F,0xF7,0xFE,0x38,0xEE,0x1C,0x38,0xEC,0x1C,0x38,0xF8,0x1C,0x38,0xFC,
								0x1C,0x38,0xF6,0x1C,0x3F,0xE7,0x1C,0x38,0xE3,0x9C,0x38,0xE3,0x9C,0x38,0xE3,0x1C,
								0x38,0xE0,0x1C,0x38,0xE0,0x1C,0x38,0xE0,0x1C,0x3F,0xE0,0x1C,0x38,0xE3,0xF8,0x38,
								0xE0,0xF8,0x30,0x00,0x70,0x00,0x00,0x00},
								{0x00,0x00,0x00,0x03,0x8C,0x00,0x03,0xCE,0x00,0x03,0x9C,0x00,0x07,0x1C,0x00,0x07,
								0x18,0x0C,0x0E,0x3F,0xFE,0x0E,0x30,0x1E,0x1F,0x73,0x98,0x1E,0x63,0xB0,0x3E,0xC3,
								0x80,0x7F,0xBB,0x80,0x6E,0x3F,0xF0,0xCE,0x3B,0xB8,0x0E,0x73,0x9C,0x0E,0x73,0x9C,
								0x0E,0x63,0x8E,0x0E,0xE3,0x8E,0x0F,0xC3,0x86,0x0F,0x83,0x86,0x0E,0x1F,0x80,0x0E,
								0x1F,0x80,0x0E,0x07,0x00,0x00,0x00,0x00}};
								//你曾是少年
unsigned char mo2[5][3*24]={{0x00,0x00,0x00,0x03,0x8C,0x00,0x03,0xCE,0x00,0x03,0x9C,0x00,0x07,0x1C,0x00,0x07,
								0x18,0x0C,0x0E,0x3F,0xFE,0x0E,0x30,0x1E,0x1F,0x73,0x98,0x1E,0x63,0xB0,0x3E,0xC3,
								0x80,0x7F,0xBB,0x80,0x6E,0x3F,0xF0,0xCE,0x3B,0xB8,0x0E,0x73,0x9C,0x0E,0x73,0x9C,
								0x0E,0x63,0x8E,0x0E,0xE3,0x8E,0x0F,0xC3,0x86,0x0F,0x83,0x86,0x0E,0x1F,0x80,0x0E,
								0x1F,0x80,0x0E,0x07,0x00,0x00,0x00,0x00},
								{0x00,0x00,0x00,0x01,0x81,0xC0,0x01,0xC3,0xC0,0x00,0xE3,0x80,0x00,0xE7,0x10,0x1F,
								0xFF,0xF8,0x1C,0x1C,0x38,0x1F,0x9D,0xF8,0x1D,0xDF,0xF8,0x1D,0xDF,0xB8,0x1C,0xDE,
								0x38,0x1F,0xFF,0xF8,0x1C,0x00,0x38,0x00,0x00,0x00,0x07,0xFF,0xE0,0x07,0x00,0xE0,
								0x07,0x00,0xE0,0x07,0xFF,0xE0,0x07,0x00,0xE0,0x07,0x00,0xE0,0x07,0x00,0xE0,0x07,
								0xFF,0xE0,0x07,0x00,0xE0,0x00,0x00,0x00	},
								{0x00,0x00,0x00,0x03,0x00,0x00,0x03,0xFF,0xC0,0x03,0x81,0xE0,0x03,0x81,0xC0,0x03,
								0xFF,0xC0,0x03,0x81,0xC0,0x03,0x81,0xC0,0x03,0x81,0xC0,0x03,0xFF,0xC0,0x03,0x81,
								0xC0,0x03,0x00,0x1C,0x7F,0xFF,0xFE,0x23,0x1C,0x00,0x03,0x9C,0x00,0x07,0x1C,0x30,
								0x07,0x1F,0xF8,0x07,0x1C,0x00,0x0F,0xDC,0x00,0x0C,0xFC,0x00,0x1C,0x7E,0x00,0x38,
								0x1F,0xFE,0x60,0x03,0xFC,0x00,0x00,0x00},
								{0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x3C,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x03,
								0x38,0x00,0x03,0xBB,0x80,0x07,0xB8,0xE0,0x07,0x38,0x78,0x07,0x38,0x3C,0x0E,0x38,
								0x1E,0x1C,0x38,0x1E,0x1C,0x38,0x6C,0x38,0x38,0xF0,0x70,0x39,0xF0,0x60,0x3B,0xE0,
								0x00,0x07,0xC0,0x00,0x0F,0x00,0x00,0x3E,0x00,0x00,0x78,0x00,0x03,0xE0,0x00,0x0F,
								0x80,0x00,0x7C,0x00,0x00,0x00,0x00,0x00},
								{0x00,0x00,0x00,0x03,0x80,0x00,0x07,0x80,0x00,0x07,0x00,0x18,0x0F,0xFF,0xFC,0x0E,
								0x1C,0x00,0x1C,0x1C,0x00,0x18,0x1C,0x00,0x30,0x1C,0x00,0x64,0x1C,0x70,0x0F,0xFF,
								0xF8,0x0E,0x1C,0x00,0x0E,0x1C,0x00,0x0E,0x1C,0x00,0x0E,0x1C,0x0C,0x7F,0xFF,0xFE,
								0x20,0x1C,0x00,0x00,0x1C,0x00,0x00,0x1C,0x00,0x00,0x1C,0x00,0x00,0x1C,0x00,0x00,
								0x1C,0x00,0x00,0x1C,0x00,0x00,0x00,0x00},};
unsigned char mo3[2][3*24]={{0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x1C,0x00,0x0C,0x1C,0x10,0x0F,0xFF,0xF8,0x0E,
							0x00,0x38,0x0E,0x00,0x38,0x0F,0xFF,0xF8,0x0E,0x1C,0x38,0x0E,0x0E,0x00,0x0E,0x0F,
							0x00,0x0E,0x06,0x0C,0x0F,0xFF,0xFE,0x0C,0x1C,0x00,0x1C,0x38,0x30,0x1C,0x3F,0xF8,
							0x1C,0x38,0x38,0x18,0x38,0x38,0x38,0x70,0x30,0x30,0xE0,0x70,0x61,0xC0,0x70,0x63,
							0x83,0xF0,0x0E,0x00,0xE0,0x00,0x00,0x00},
							{0x00,0x00,0x00,0x0E,0x00,0x00,0x07,0x00,0x08,0x07,0xFF,0xFC,0x3B,0x20,0x1C,0x3F,
							0x00,0x1C,0x38,0x83,0x1C,0x39,0xFF,0x9C,0x39,0xC7,0x1C,0x39,0xC7,0x1C,0x39,0xC7,
							0x1C,0x39,0xC7,0x1C,0x39,0xFF,0x1C,0x39,0xC7,0x1C,0x39,0xC7,0x1C,0x39,0xC7,0x1C,
							0x39,0xFF,0x1C,0x39,0xC7,0x1C,0x39,0xC6,0x1C,0x38,0x00,0x1C,0x38,0x01,0xFC,0x38,
							0x00,0xF8,0x38,0x00,0x38,0x00,0x00,0x00}};
//unsigned char mo1[4][3*24];
//unsigned char mo2[5][3*24];
//unsigned char mo3[2][3*24];

void DrawPoint(int *py,int x, int y, int color)
{
    if(x >= 0 && x < 800 && y >= 0 && y < 480)
    {
        *(py + 800* y + x) = color;
    }
}

void ChangeBack(char *bmpPath)
{
    int lcd_fd = open("/dev/fb0",O_RDWR);
    if(lcd_fd < 0)
    {
        perror("open lcd_fd error\n");
    }
    int *p=mmap(NULL,800*480*4,PROT_READ | PROT_WRITE, MAP_SHARED,lcd_fd,0);
    if(p == MAP_FAILED)
    {
        perror("mmap erorr\n");
    }
    int music_fd = open(bmpPath,O_RDWR);
    if(music_fd < 0)
    {
        perror("open Music_fd erorr\n");
    }


    lseek(music_fd,54,SEEK_SET);
    unsigned char dat[800*480*3] = {0};



    int ret = read(music_fd,dat,800*480*3);


    if(ret < 800*480*3)
    {
        perror("read picture_fd erorr\n");
    }


    unsigned char a,b,g,r;
    a = 0;
    int color,num = 0;
    int i,j;
    for (i = 0; i < 480; i++)
    {
        for(j = 0; j < 800; j++)
        {
            b = dat[num +0];
            g = dat[num +1];
            r = dat[num +2];

            num = num +3;

            color =  a << 24 | r << 16 | g << 8 | b;

            //DrawPoint(p,x + j,y + high-i -1,color);
            DrawPoint(p,j,480-i -1,color);

        }

    }

    munmap(p,800*480*4);
    close(lcd_fd);
    close(music_fd);

}

//显示字
void show_word(char *word, int x, int y,int wide,int wordsize,int color,int *py)
{
	int i,j;
	int x1; //横坐标
	int y1;	//纵坐标
	int by = wide/8;
	for(i = 0; i < wordsize; i++)	//遍历每个字节
	{
		for(j = 7; j >= 0; j--)		//遍历某个字节的每个位
		{
			if(word[i] & (1 << j))
			{
				x1 = x + 8 *(i % by)/*确定区域是在哪个字节*/+ 7 -j; /*确定是字节中的哪个位*/
				y1 = y + i / by;
				DrawPoint(py,x1,y1,color);//在对应位置的像素点上色
			}
		}
	}
}

void Brushword()
{
	int i,j;
	int lcd_fd = open("/dev/fb0",O_RDWR);
	if(lcd_fd < 0)
	{
		perror("open lcd_fd errno\n");
	}
	//2.映射文件
	int *p = mmap(NULL,800*480*4,PROT_READ | PROT_WRITE,MAP_SHARED,lcd_fd,0);
	if(p == MAP_FAILED)
	{
		perror("mmap errno\n");
	}
	for(i = 200; i < 320; i++)
	{
		for(j =750; j < 774; j++)
		{
			*(p + 800* i + j) = 0x00FFFFFF;
		}
	}
	munmap(p,800*480*4);
	close(lcd_fd);
}

void Toword(int Id)
{
	int lcd_fd = open("/dev/fb0",O_RDWR);
	if(lcd_fd < 0)
	{
		perror("open lcd_fd errno\n");
	}
	//2.映射文件
	int *p = mmap(NULL,800*480*4,PROT_READ | PROT_WRITE,MAP_SHARED,lcd_fd,0);
	if(p == MAP_FAILED)
	{
		perror("mmap errno\n");
	}
	
    switch(Id) {
        case 0:
			Brushword();
			show_word(mo1[0],750,200,24,sizeof(mo1[0]),0x00000000,p);
			show_word(mo1[1],750,224,24,sizeof(mo1[0]),0x00000000,p);
			show_word(mo1[2],750,248,24,sizeof(mo1[0]),0x00000000,p);
			show_word(mo1[3],750,272,24,sizeof(mo1[0]),0x00000000,p);
            break;
        case 1:
			Brushword();
			show_word(mo2[0],750,200,24,sizeof(mo2[0]),0x00000000,p);
			show_word(mo2[1],750,224,24,sizeof(mo2[0]),0x00000000,p);
			show_word(mo2[2],750,248,24,sizeof(mo2[0]),0x00000000,p);
			show_word(mo2[3],750,272,24,sizeof(mo2[0]),0x00000000,p);
			show_word(mo2[4],750,296,24,sizeof(mo2[0]),0x00000000,p);
            break;
        case 2:
		    Brushword();
			show_word(mo3[0],750,200,24,sizeof(mo3[0]),0x00000000,p);
			show_word(mo3[1],750,224,24,sizeof(mo3[0]),0x00000000,p);
            break;
        default:
			Brushword();
            printf("Print is error!\n");
            break;
    }
	munmap(p,800*480*4);
	close(lcd_fd);
}
