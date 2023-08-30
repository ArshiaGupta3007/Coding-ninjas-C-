#include<iostream>
using namespace std;
void printTable(int start, int end, int step) {
   


    for(int f=start;f<=end;f+=step){
        int c=(f-32)*5/9;
        cout<< f <<" "<< c <<endl;
    }
    
    

    
}


int main()

{  int S,E,W;
cin >>S>>E>>W;
printTable(S, E, W);

}