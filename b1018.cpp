#include<cstdio>
#include<cstring>

int change(char x);

int main()
{
    char map[3] = {'B','C','J'};        //���δ���ʯͷ������������
    int n;                              //���������
    char c1,c2;                         //���ҳ������ƣ�
    int end_c1[3],end_c2[3];            //0-ʤ��1-ƽ��2-����
    memset(end_c1,0,sizeof(end_c1));
    memset(end_c2,0,sizeof(end_c2));  
    //end_c1[3] = {0};
    //end_c2[3] = {0};     
    int num1,num2;                      //����ĸת��Ϊ���ֽ��бȽϣ�   
    int win_c1[3],win_c2[3];
    memset(win_c1,0,sizeof(win_c1));
    memset(win_c2,0,sizeof(win_c2));
    
    //��ʤ����
    scanf("%d",&n);
    for (int i = 0; i < n; i++)        
    {
        getchar();                      //����scanf %c���\n��
        scanf("%c %c",&c1,&c2);
        num1 = change(c1);
        num2 = change(c2);
        if (num1 == num2)               //ƽ�֣�
        {
            end_c1[1] ++;
            end_c2[1] ++;
        }
        else if((num1 + 1) % 3 == num2) //��Ӯ��                       
        {   
            end_c1[0] ++;
            end_c2[2] ++;
            win_c1[num1] ++;            //�׿�num1��c1��Ӯ�Ĵ�����
        }
        else                            //��Ӯ��
        {
            end_c1[2] ++;
            end_c2[0] ++;
            win_c2[num2] ++;            //�ҿ�num2��c2��Ӯ�Ĵ�����
        }
    }

    //�ס������Ž⣻
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