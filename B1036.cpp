#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>

void printc1(int &x,char &y);     //��ӡͼ���ĺ���

int main()
{
    int col,row;  //����col������row;
    char c;
    scanf("%d %c",&col,&c);  //����߳�n��ͼ��c;
    //int *p = &col;
    //char *q = &c;

    if (col % 2 == 1) row = col/2 + 1;
    else row = col/2;       //����=�߳�������Ϊ����0.5��,����ȡ����
    
    printc1(col,c);
    /*for (int i = 0; i < col; i++)   //��һ�У�
    {
        printf("%c",c);
    }*/
    printf("\n");

    for (int i = 2; i < row; i++){  //2~row-1 �У�
        printf("%c",c);                
            for (int k = 0; k < col-2; k++){
                printf(" ");
            }
        printf("%c\n",c);
    }  

    printc1(col,c);   
    /*for (int i = 0; i < col; i++){    //��row�У�
        printf("%c",c);   
    }*/

    return 0;
}

void printc1(int &x,char &y){
    for (int i = 0; i < x; i++){    //��row�У�
        printf("%c",y);   
    }
}