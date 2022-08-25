//pointers
//**(double star) is able to store the value of single variable
#include<iostream>
using namespace std;
main()
{
	int a=10;
	cout<<a<<endl; //10
	
	int *p;
	p=&a;
	cout<<p;//address of a
	cout<<*p;//value at that address

int **p1;
p1=&p;
cout<<p1;  //address of p
}
