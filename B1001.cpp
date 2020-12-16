#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
int main(){
	int n,step = 0;	//a����3n+1,step��ʾ��ǰ���� 
	
	scanf("%d",&n);
    
	for(n; n != 1;){
		if(n%2 == 0) n /= 2;
	    else n = (3*n+1)/2;	
	    step ++;
	}
	
	printf("%d\n",step);
	
	return 0;
}

