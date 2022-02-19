#include<cstdio>
struct Student
{
    char name[11];
    char id[11];
    int score; 
}temp,student_min,student_max;

int main()
{
    student_max.score = -1;
    student_min.score = 101;
    int n;                           //学生人数；

    scanf("%d",&n);
    for (int i = 0; i < n; i++)     //开始比较；
    {
        scanf("%s%s%d",temp.name,temp.id,&temp.score);      //scanf使用'%s'输出字符串时，对应数组名前不需要加'&'；
        if (temp.score > student_max.score) student_max = temp;
        if (temp.score < student_min.score) student_min = temp;
    }
    
    printf("%s %s\n",student_max.name,student_max.id);      //分数最高学生；
    printf("%s %s\n",student_min.name,student_min.id);      //分数最低学生；
    return 0;
}