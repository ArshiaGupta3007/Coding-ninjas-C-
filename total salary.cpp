#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int allow,basic;
	char grade;
	
	
	double hra,da,pf;
	cin >> basic  >> grade;
	hra=0.2* basic;
        da = 0.5 * basic;
        
          if (grade == 'A') {
            allow = 1700;
          } else if (grade == 'B') {
          
          allow = 1500;
        }
        else { 
          allow = 1300;
        }