#include<cstdio>

int main()
{
    int g1,s1,k1;                   //Ӧ��������¡��Galleon��.���ɣ�Sickle��.���أ�Knut����
    int g2,s2,k2;                   //ʵ����
    int knut,knut1,knut2;           //ȫ��ת��Ϊknut��
    scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);

    knut1 = k1 + s1*29 + g1*17*29;
    knut2 = k2 + s2*29 + g2*17*29;

    knut = knut2 - knut1;           //���㣻
    
    if(knut < 0)
    {
        knut = -knut;
        printf("%d.%d.%d",(knut / 493) * (-1),knut % 493 / 29,knut % 29);
    }
    else printf("%d.%d.%d",knut / 493,knut % 493 / 29,knut % 29);

    return 0;
}