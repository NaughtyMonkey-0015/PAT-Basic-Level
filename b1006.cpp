#include<cstdio>

int main()
{
    int N;                      //输入的数字，N<1000；
    //int n[4] = {0};             //存储每位的数字；
    int b,s,m;                  //b统计有几个“百”，s统计有几个“十”，m统计有几个“一”；
    
    scanf("%d",&N);
    b = N / 100;
    s = (N % 100) / 10;
    m = N % 10;
    for (int i = 0; i < b; i++)     printf("B");
    for (int i = 0; i < s; i++)     printf("S");
    for (int i = 1; i <= m; i++)    printf("%d",i);
    
    return 0;
}
