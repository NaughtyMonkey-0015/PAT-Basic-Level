#include<cstdio>
#include<cmath>

int main()
{
    int n,num;                                  //num���ڼ�¼δʹ�õ�ͼ��������
    char m;
    int col;                                    //�洢ÿ��ͼ������(������),colnΪ��ʱ������

    scanf("%d %c",&n,&m);                       //����������ͼ����ʽ��
    num = n;
    col = floor(sqrt(2.0 * (n+1))) - 1;         //��һ�и�����
    if(col % 2 == 0) col --;
    //��ӡ�ϰ벿�֣�
    for (int i = col; i >= 1; i -= 2)           //��ѭ����
    {                                           //��ѭ����
        for (int j = 0; j < (col - i)/2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)        
        {
            printf("%c",m);    
            num--;                 
        }
        printf("\n");
    }
    //��ӡ�°벿�֣�
    for (int i = 3; i <= col; i += 2)
    {
        for (int j = 0; j < (col - i)/2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)        
        {
            printf("%c",m);    
            num--;                 
        }
        printf("\n");
    }
    printf("%d",num);                           //���ʣ������� 

    return 0;
}