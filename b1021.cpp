#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char N[1001];                               //���ڡ�0���ĸ�����ȡ�෨����ͳ�ƣ�ʹ���ַ�����洢����(N < 1000)��
    cin.getline(N,1001);                        //PAT��������֧�֡�puts()����
    int length = strlen(N);                     //ͳ������N��λ����
    int num[11] = {0};                          //�洢0~9���ֳ��ִ�����

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