//the variables declared inside the class are Data Members
//pointer to data member
#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
		int a; //data member
		void putdata()
		{
			cout<<"a is= "<<a;
		}
};
main()
{
	class student obj, *p;
	p=&obj;
	
	int student::*ptr= &student::a;
	obj.*ptr=10;
	obj.putdata();
	
	p->*ptr=20;
	p->putdata();
}
