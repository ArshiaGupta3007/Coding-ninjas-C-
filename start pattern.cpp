#include<iostream>
using namespace std;

int main() {

  int i,j,k=0,N;
  cin>> N;
  for(i=1;i<=N;i++){
    for (j=1;j<=(N-i);j++)
      cout<<" ";
      while(k!=(2*i-1)){
        cout<<"*";
        k++;
      }
      k=0;
      cout<<endl;
    
  }
  cout<<endl;
}
