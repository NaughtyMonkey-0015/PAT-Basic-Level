#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>

void printc1(int &x,char &y);     //打印图案的函数

int main()
{
    int col,row;  //列数col，行数row;
    char c;
    scanf("%d %c",&col,&c);  //输入边长n，图案c;
    //int *p = &col;
    //char *q = &c;

    if (col % 2 == 1) row = col/2 + 1;
    else row = col/2;       //列数=边长，行数为列数0.5倍,向上取整；
    
    printc1(col,c);
    /*for (int i = 0; i < col; i++)   //第一行；
    {
        printf("%c",c);
    }*/
    printf("\n");

    for (int i = 2; i < row; i++){  //2~row-1 行；
        printf("%c",c);                
            for (int k = 0; k < col-2; k++){
                printf(" ");
            }
        printf("%c\n",c);
    }  

    printc1(col,c);   
    /*for (int i = 0; i < col; i++){    //第row行；
        printf("%c",c);   
    }*/

    return 0;
}

void printc1(int &x,char &y){
    for (int i = 0; i < x; i++){    //第row行；
        printf("%c",y);   
    }
}