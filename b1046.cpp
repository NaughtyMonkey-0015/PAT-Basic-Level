#include<cstdio>

int main()
{
    int N,Aclain,Bclain,Ahand,Bhand;    //NΪ��ȭ����,clainΪ���������֣�handΪ������ȭ��������֣�
    int failA = 0,failB = 0;                    //��¼����N�����ܼ���Ĵ���;

    scanf("%d",&N);
    if (N >= 100 && N <= 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%d%d%d%d",&Aclain,&Ahand,&Bclain,&Bhand);
            if (Aclain + Bclain == Ahand && Aclain + Bclain != Bhand)
            {
                failB ++;
            }
            else if(Aclain + Bclain == Bhand && Aclain + Bclain != Ahand)
            {
                failA ++;
            }
            else if( Aclain + Bclain == Bhand == Ahand && Aclain + Bclain != Bhand != Ahand) continue;
        }
    }

    printf("%d %d\n",failA,failB);

    return 0;
}