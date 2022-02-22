#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char N[1001];                               //由于‘0’的个数用取余法不好统计，使用字符数组存储数字(N < 1000)；
    cin.getline(N,1001);                        //PAT编译器不支持‘puts()’；
    int length = strlen(N);                     //统计数字N的位数；
    int num[11] = {0};                          //存储0~9数字出现次数；

    for (int i = 0; i < length; i++)
    {
        int k;
        k = N[i] - '0';
        num[k] ++;
    }
    for (int i = 0; i < 10; i++)
    {
        if(num[i] == 0) continue;
        printf("%d:%d\n",i,num[i]);
    }
    
    return 0;
}