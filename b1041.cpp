#include<cstdio>
const int max = 1002;
struct Student
{
    long long id;               //准考证号；
    int examSeat;               //考试座位号；
}testSeat[max];                 //试机座位号（以此为下标记录考生信息）；

int main()
{
    int n,m,seat,examSeat;
    long long id;

    scanf("%d",&n);             //考生人数；
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %d %d",&id,&seat,&examSeat);
        testSeat[seat].id = id;
        testSeat[seat].examSeat = examSeat;
    }
    scanf("%d",&m);             //查询人数；
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&seat);
        printf("%lld %d\n",testSeat[seat].id,testSeat[seat].examSeat);
    }
    
    return 0;
}
