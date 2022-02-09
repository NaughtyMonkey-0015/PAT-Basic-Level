#include<cstdio>
int main()
{
    int num[101];
    int n,m,count = 0;                  //n个数，循环右移m个，已输出count个数；
    
    scanf("%d%d",&n,&m);           
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);        //输入整数序列；
    }
    m = m%n;                        //确保n<m时，移动次数仍然小于n；
    for (int i = n-m; i < n; i++)   //输出n-m到n-1；
    {
        printf("%d",num[i]);
        count ++;
        if(count < n) printf(" ");  //确保最后一位无空格；
    }
    for (int i = 0; i < n-m; i++)   //输出0到n-m-1；
    {
        printf("%d",num[i]);
        count ++;
        if(count < n) printf(" ");
    }
    
    return 0;
}