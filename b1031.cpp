#include<cstdio>

int W[18] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};              //���Ȩ�أ�
char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};     //У����ֵ��

int main()
{
    int n;                  //���֤������
    char id[19];            //�洢���֤���룻
    bool flag = true;

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s",id);
        int k,sum = 0;            //�ݴ��Ȩ�ͣ�
        for (k = 0; k < 17; k++)
        {
            if(!(id[k] >= '0' && id[k] <= '9'))    break;
            sum += (id[k] - '0') * W[k];        //��Ȩ��ͣ�
        }
        if (k < 17)
        {
            printf("%s\n",id);          //��������������id��
            flag = false;
        }
        else                            //����У���룻
        {
            if (id[17] != M[sum % 11])  
            {
                printf("%s\n",id);      //���У�����������id��
                flag = false;
            }
        }    
    }
    
    if (flag == true)   printf("All passed\n");

    return 0;
}