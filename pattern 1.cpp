#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int i,j,k,N;
  cin>>N;
  for(i=1;i<=N;i++){
	  k=i;
	  for(j=1;j<=i;j++,k++){
		  cout<<k;

	  }
	  cout<<"\n";
  }
}