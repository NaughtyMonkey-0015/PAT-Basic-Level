#include<cstdio>
int main()
{
    int num[101];
    int n,m,count = 0;                  //n������ѭ������m���������count������
    
    scanf("%d%d",&n,&m);           
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);        //�����������У�
    }
    m = m%n;                        //ȷ��n<mʱ���ƶ�������ȻС��n��
    for (int i = n-m; i < n; i++)   //���n-m��n-1��
    {
        printf("%d",num[i]);
        count ++;
        if(count < n) printf(" ");  //ȷ�����һλ�޿ո�
    }
    for (int i = 0; i < n-m; i++)   //���0��n-m-1��
    {
        printf("%d",num[i]);
        count ++;
        if(count < n) printf(" ");
    }
    
    return 0;
}