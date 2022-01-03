#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>

const int max = 100010;

int main()
{
   int n,sch,score;         //参赛人数，学校编号，学生分数;
   int sumscore[max] = {0}; //学校总分；
    scanf("%d",&n);

    for(int i = 0;i < n;i++)    //录入个人信息
    {           
        scanf("%d %d",&sch,&score);
        sumscore[sch] += score;
    }
    
    int k=0, sum = -1;
    for (int i = 1; i <= n; i++)    //比较各学校总分        
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

