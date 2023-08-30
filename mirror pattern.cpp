#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int i,j,k,N;
  cin >> N;
  for(i=0;i<N;i++){
	  for(j=1;j<N-i;j++){
		  cout<< " ";
	  }
	  for(k=0;k<=i;k++){
		  cout<<k+1;
	  }
	  cout<<"\n";
  }
}
