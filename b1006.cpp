#include<cstdio>

int main()
{
    int N;                      //��������֣�N<1000��
    //int n[4] = {0};             //�洢ÿλ�����֣�
    int b,s,m;                  //bͳ���м������١���sͳ���м�����ʮ����mͳ���м�����һ����
    
    scanf("%d",&N);
    b = N / 100;
    s = (N % 100) / 10;
    m = N % 10;
    for (int i = 0; i < b; i++)     printf("B");
    for (int i = 0; i < s; i++)     printf("S");
    for (int i = 1; i <= m; i++)    printf("%d",i);
    
    return 0;
}
