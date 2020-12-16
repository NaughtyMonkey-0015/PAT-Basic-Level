#include<cstdio>
int main(){
    int a,b,d,num = 0,z[100];
    scanf("%d %d %d",&a,&b,&d);

    int m = a+b;
    do{
      z[num ++] = m%d; 
      m = m/d; 
    } while (m != 0);
    
    for(int i = num-1;i >= 0;i --){
        printf("%d",z[i]);
    }

    return 0;
}