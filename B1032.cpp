#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
//const int N = 100010;
int	sum[100000]={0}; //Ҫ������������ó���10000���ʶ����������Ҫ�����������ѧ����
int main(){
	int n,sch,score;
	
    scanf("%d",&n);
    
    for(int i = 0;i < n;i++){
    	scanf("%d %d",&sch,&score);
    	sum[sch] += score;
	}
    int k = 1,max = -1;
    for(int i = 1;i <= n;i++){
    	if(sum[i] > max){
    		k = i;
    		max = sum[i];
		}
	}
    
    printf("%d %d\n",k,max);
    
	return 0;
}

