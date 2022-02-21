#include<cstdio>

int main()
{
    int g1,s1,k1;                   //应付——加隆（Galleon）.西可（Sickle）.纳特（Knut）；
    int g2,s2,k2;                   //实付；
    int knut,knut1,knut2;           //全部转换为knut；
    scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);

    knut1 = k1 + s1*29 + g1*17*29;
    knut2 = k2 + s2*29 + g2*17*29;

    knut = knut2 - knut1;           //找零；
    
    if(knut < 0)
    {
        knut = -knut;
        printf("%d.%d.%d",(knut / 493) * (-1),knut % 493 / 29,knut % 29);
    }
    else printf("%d.%d.%d",knut / 493,knut % 493 / 29,knut % 29);

    return 0;
}