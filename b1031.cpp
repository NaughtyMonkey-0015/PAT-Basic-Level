#include<cstdio>

int W[18] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};              //求和权重；
char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};     //校验码值；

int main()
{
    int n;                  //身份证个数；
    char id[19];            //存储身份证号码；
    bool flag = true;

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s",id);
        int k,sum = 0;            //暂存加权和；
        for (k = 0; k < 17; k++)
        {
            if(!(id[k] >= '0' && id[k] <= '9'))    break;
            sum += (id[k] - '0') * W[k];        //加权求和；
        }
        if (k < 17)
        {
            printf("%s\n",id);          //输出数字有问题的id；
            flag = false;
        }
        else                            //检验校验码；
        {
            if (id[17] != M[sum % 11])  
            {
                printf("%s\n",id);      //输出校验码有问题的id；
                flag = false;
            }
        }    
    }
    
    if (flag == true)   printf("All passed\n");

    return 0;
}