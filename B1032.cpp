#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>

const int max = 100010;

int main()
{
   int n,sch,score;         //����������ѧУ��ţ�ѧ������;
   int sumscore[max] = {0}; //ѧУ�ܷ֣�
    scanf("%d",&n);

    for(int i = 0;i < n;i++)    //¼�������Ϣ
    {           
        scanf("%d %d",&sch,&score);
        sumscore[sch] += score;
    }
    
    int k=0, sum = -1;
    for (int i = 1; i <= n; i++)    //�Ƚϸ�ѧУ�ܷ�        
    {
        if (sumscore[i] > sum) 
        {
            sum = sumscore[i];
            k = i;
        } 
    }
    
    printf("%d %d\n",k,sum);

   return 0;
}

