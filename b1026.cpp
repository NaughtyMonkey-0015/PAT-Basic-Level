#include<cstdio>
#include<cmath>

int const CLK_TCK = 100;

int main()
{
    int c1,c2,hh,mm,ss,time;
    scanf("%d%d",&c1,&c2);      //��������ʱ�Ӵ��ʱ�䣻

    time = ((c2 - c1) + 50)/CLK_TCK;    //�������룬Ҳ����round������Ը�����������
    hh = time/3600;
    time = time % 3600;
    mm = time/60;
    ss = time % 60;

    printf("%02d:%02d:%02d",hh,mm,ss);

    return 0;
}