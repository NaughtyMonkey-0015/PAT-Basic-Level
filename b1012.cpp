#include<cstdio>
int main()
{
    int n,count[5] = {0},num[1001] = {0};
    int a1,a2,a3,a5;
    double a4 = 0;
    a1 = a2 = a3 = a5 = 0;

    scanf("%d",&n);             //n个整数；
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    
    //计算a1；
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 10 == 0)
        {
            a1 += num[i];
            count[0] ++;
        }
    }
    //计算a2；
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 5 == 1)
        {
            ++ c;
            if (c % 2 == 1)
            {
                a2 += num[i];
            }
            else
            {
                a2 -= num[i];
            }
            count[1] ++;        
        }
    }
    //计算a3；
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 5 == 2)
        {
            a3 ++;
            count[2] ++;
        }
    }
    //计算a4；
    int b = 0;
    for (int i = 0; i < n; i++)
    {   
        if (num[i] % 5 == 3)
        {
            a4 += num[i];
            b ++;
            count[3] ++;
        }
    }
    a4 = a4 / b;
    //计算a5；
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 5 == 4)
        {
            if (num[i] > a5)
            {
                a5 = num[i];
            }
            count[4] ++;   
        }
    }
    
    //输出；
    if(count[0] == 0)   printf("N ");
    else printf("%d ",a1);
    if(count[1] == 0)   printf("N ");
    else printf("%d ",a2);
    if(count[2] == 0)   printf("N ");
    else printf("%d ",a3);
    if(count[3] == 0)   printf("N ");
    else printf("%.1lf ",a4);
    if(count[4] == 0)   printf("N");
    else printf("%d",a5);

    return 0;
}