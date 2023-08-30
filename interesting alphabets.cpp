#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
     char i,j;
     int N;
     cin>> N;
     for (i=N+64;i>=65;i--){
         for(j=i;j<=N+64;j++){
             cout<<j;

         }
         cout<<"\n";
     }
    
}