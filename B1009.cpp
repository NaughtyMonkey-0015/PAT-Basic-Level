#include<cstdio>
#include<cstring>

int main(){
    int num = 0;    //��¼��������
    char word[80][80];  //�洢����
    while (scanf("%s",word[num]) != EOF){
        num ++;
    }
    
    for(int i = num-1;i >= 0;i --){
        printf("%s",word[i]);
        if(i > 0) printf(" ");
    }
    return 0;
}
