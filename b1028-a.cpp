#include<cstdio>
struct census
{
    char name[6];                               //������
    int year,month,day;                         //�����ꡢ�¡��գ�
}temp,people_min,people_max,left,right;         //��ʱ�洢�������ᣬ���곤����߽磬�ұ߽磻
bool more(census x,census y);                   //y��xС������1�� 
bool less(census a,census b);                   //b��a�󣬷���1��

int main()
{
    int n,num = 0;                              //����������Ч���ո�����
    //��ʼ����
    people_max.year = right.year = 2014;
    people_min.year = left.year = 1814;
    people_max.month = people_min.month = left.month = right.month = 9;
    people_max.day = people_min.day = left.day = right.day = 6;

    //��ʼ�Ƚϣ�
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d/%d/%d",temp.name,&temp.year,&temp.month,&temp.day);
        if(less(left,temp) && more(right,temp)) //�ж�������Ч��
        {
            num ++;
            if(less(people_min,temp))   people_min = temp;      //������С��
            if(more(people_max,temp))   people_max = temp;      //�������
        }
    }
    if(num == 0)    printf("0\n");
    else printf("%d %s %s\n",num,people_max.name,people_min.name);

    return 0;
}

bool more(census x,census y)
{
    if(x.year != y.year)            return y.year <= x.year;
    else if(x.month != y.month)     return y.month <= x.month;
    else                            return y.day <= x.day;
}

bool less(census a,census b)
{
    if(a.year != b.year)            return a.year <= b.year;
    else if(a.month != b.month)     return a.month <= b.month;
    else                            return a.day <= b.day;
}