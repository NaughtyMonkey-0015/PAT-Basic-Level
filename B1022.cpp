#include<iostream>
using namespace std;

int main(){
    int a,b,d,num=0;    //dΪҪ�任�Ľ��ƣ�
    int z[100];
    cin >> a >> b >> d;
    int m = a+b;

    do 
    {
        z[num++] = m % d;
        m = m/d;
    } while (m!=0);
    
    for (int i = num-1; i >= 0; i--)
    {
        cout << z[i];
    }
    
    return 0;
}