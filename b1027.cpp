#include<cstdio>
#include<cmath>

int main()
{
    int n,num;                                  //num用于记录未使用的图案个数；
    char m;
    int col;                                    //存储每行图案个数(多少列),coln为临时变量；

    scanf("%d %c",&n,&m);                       //给出个数、图案样式；
    num = n;
    col = floor(sqrt(2.0 * (n+1))) - 1;         //第一行个数；
    if(col % 2 == 0) col --;
    //打印上半部分；
    for (int i = col; i >= 1; i -= 2)           //行循环；
    {                                           //列循环；
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
    //打印下半部分；
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
    printf("%d",num);                           //输出剩余个数； 

    return 0;
}