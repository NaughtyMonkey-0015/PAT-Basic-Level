#include<cstdio>
#include<cmath>

int const CLK_TCK = 100;

int main()
{
    int c1,c2,hh,mm,ss,time;
    scanf("%d%d",&c1,&c2);      //输入两次时钟打点时间；

    time = ((c2 - c1) + 50)/CLK_TCK;    //四舍五入，也可用round函数针对浮点数操作；
    hh = time/3600;
    time = time % 3600;
    mm = time/60;
    ss = time % 60;

    printf("%02d:%02d:%02d",hh,mm,ss);

    return 0;
}