#include<cstdio>
#include<cstring>

int change(char x);

int main()
{
    char map[3] = {'B','C','J'};        //依次代表：石头、剪刀、布；
    int n;                              //交锋次数；
    char c1,c2;                         //甲乙出的手势；
    int end_c1[3],end_c2[3];            //0-胜；1-平；2-负；
    memset(end_c1,0,sizeof(end_c1));
    memset(end_c2,0,sizeof(end_c2));  
    //end_c1[3] = {0};
    //end_c2[3] = {0};     
    int num1,num2;                      //将字母转换为数字进行比较；   
    int win_c1[3],win_c2[3];
    memset(win_c1,0,sizeof(win_c1));
    memset(win_c2,0,sizeof(win_c2));
    
    //比胜负；
    scanf("%d",&n);
    for (int i = 0; i < n; i++)        
    {
        getchar();                      //吸收scanf %c后的\n；
        scanf("%c %c",&c1,&c2);
        num1 = change(c1);
        num2 = change(c2);
        if (num1 == num2)               //平局；
        {
            end_c1[1] ++;
            end_c2[1] ++;
        }
        else if((num1 + 1) % 3 == num2) //甲赢；                       
        {   
            end_c1[0] ++;
            end_c2[2] ++;
            win_c1[num1] ++;            //甲靠num1（c1）赢的次数；
        }
        else                            //乙赢；
        {
            end_c1[2] ++;
            end_c2[0] ++;
            win_c2[num2] ++;            //乙靠num2（c2）赢的次数；
        }
    }

    //甲、乙最优解；
    int k1,k2;
    k1 = k2 = 0;
    for (int i = 0; i < 3; i++)
    {
        if (win_c1[i] > win_c1[k1])
        {
            k1 = i;
        }
        if (win_c2[i] > win_c2[k2])
        {
            k2 = i;
        }    
    }
    
    printf("%d %d %d\n",end_c1[0],end_c1[1],end_c1[2]);
    printf("%d %d %d\n",end_c2[0],end_c2[1],end_c2[2]);
    printf("%c %c",map[k1],map[k2]);

    return 0;
}

int change(char x){
    if (x == 'B') return 0;
    if (x == 'C') return 1;
    if (x == 'J') return 2;
    return -1;
}

//10 C J J B C B B B B C C C C B J B B C J J