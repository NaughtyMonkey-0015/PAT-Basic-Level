#include<cstdio>
struct census
{
    char name[6];                               //姓名；
    int year,month,day;                         //出生年、月、日；
}temp,people_min,people_max,left,right;         //临时存储，最年轻，最年长，左边界，右边界；
bool more(census x,census y);                   //y比x小，返回1； 
bool less(census a,census b);                   //b比a大，返回1；

int main()
{
    int n,num = 0;                              //总人数，有效生日个数；
    //初始化：
    people_max.year = right.year = 2014;
    people_min.year = left.year = 1814;
    people_max.month = people_min.month = left.month = right.month = 9;
    people_max.day = people_min.day = left.day = right.day = 6;

    //开始比较：
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d/%d/%d",temp.name,&temp.year,&temp.month,&temp.day);
        if(less(left,temp) && more(right,temp)) //判断生日有效；
        {
            num ++;
            if(less(people_min,temp))   people_min = temp;      //年龄最小；
            if(more(people_max,temp))   people_max = temp;      //年龄最大；
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