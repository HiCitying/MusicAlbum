#include <stdio.h>
int Min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}

int main()
{
    int a,b,c;
    int x;
    scanf("%d %d %d",&a,&b,&c);
    x=Min(a,Min(b,c));
    printf("Min:%d\n",x);

}