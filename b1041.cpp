#include<cstdio>
const int max = 1002;
struct Student
{
    long long id;               //׼��֤�ţ�
    int examSeat;               //������λ�ţ�
}testSeat[max];                 //�Ի���λ�ţ��Դ�Ϊ�±��¼������Ϣ����

int main()
{
    int n,m,seat,examSeat;
    long long id;

    scanf("%d",&n);             //����������
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %d %d",&id,&seat,&examSeat);
        testSeat[seat].id = id;
        testSeat[seat].examSeat = examSeat;
    }
    scanf("%d",&m);             //��ѯ������
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&seat);
        printf("%lld %d\n",testSeat[seat].id,testSeat[seat].examSeat);
    }
    
    return 0;
}
