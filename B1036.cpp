#include<cstdio>
#include<cstring>
#include<cmath>
int main(){
    int n;
    double m; 
    char x;
	
    scanf("%d %c",&n,&x);
	
	m = round(n*1.0/2);

    for(int i = 0;i < m;i ++){
        if(i == 0||i == m-1){
             for(int j = 0;j < n;j ++){
                 printf("%c",x);
                if(j == n-1) printf("\n");
            }
        }
        else{
            printf("%c",x);
            for(int j = 0;j < n-2;j ++){
                printf(" ");
            }
            printf("%c\n",x);
        }
    }

    return 0;
}
