#inclde<stdio.h>
int main()
{
    int a[3];
    int i = 0;
    for(i=0; i< 3; i++)
    {
        scanf("%d\n",&a[i]);
    }

    int res = (a[0]>=a[1]&&a[0]>=a[2]) ?(a[0] : (a[1] > = a[0] && a[1] >= a[2]) ? a[1] : a[2]);
    printf("res =%d\n",res);
    return 0;
}