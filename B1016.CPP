#include <cstdio>

using namespace std;

long long result(long long &x,int &y);

int main(){
    long long A,B,PA,PB,P;
    int DA,DB;

    scanf("%lld%d%lld%d",&A,&DA,&B,&DB);

    PA = result(A,DA);
    PB = result(B,DB);
    P = PA + PB;

    printf("%lld",P);

    return 0;
}

long long result(long long &x,int &y){
    long long PA = 0;

    while (x != 0){
        if (x%10 == y){
            PA = PA*10 + y;
        }
        x = x/10;
    }
   
    return PA;
}