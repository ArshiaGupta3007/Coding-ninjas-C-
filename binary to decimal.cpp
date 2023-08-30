#include<iostream>
using namespace std;

int main() {
	
	int N,rem,ans=0,pv=1;
    cin>> N;
    while(N>0){
        rem=N%10;
        N=N/10;
        ans=ans+rem*pv;
        pv=pv*2;


    }cout<< ans;

    
}
