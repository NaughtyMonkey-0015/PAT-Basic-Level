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
    int n;                           //ѧ��������

    scanf("%d",&n);
    for (int i = 0; i < n; i++)     //��ʼ�Ƚϣ�
    {
        scanf("%s%s%d",temp.name,temp.id,&temp.score);      //scanfʹ��'%s'����ַ���ʱ����Ӧ������ǰ����Ҫ��'&'��
        if (temp.score > student_max.score) student_max = temp;
        if (temp.score < student_min.score) student_min = temp;
    }
    
    printf("%s %s\n",student_max.name,student_max.id);      //�������ѧ����
    printf("%s %s\n",student_min.name,student_min.id);      //�������ѧ����
    return 0;
}