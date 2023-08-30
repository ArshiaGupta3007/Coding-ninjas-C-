#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
char i,j,k;
int N;
  cin >> N;
  
  for(i=65;i<=N+64;i++){
	  k=i;
	  for(j=65;j<=i;j++,k++){
		  cout<<k;
	  }
	  cout<<"\n";
  }
  
}