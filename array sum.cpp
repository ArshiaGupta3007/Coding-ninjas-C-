#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<&i<<endl;
	int *p=&i;
	cout<<p<<endl;
	
	float f=3.14;
	cout<<&f<<endl;
	float *a = &f;
	cout<<a<<endl;
	
	double d;
	cout<<&d<<endl;
	double *b= &d;
	cout<<b<<endl;
}
