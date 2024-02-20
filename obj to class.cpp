#include<iostream>
#include<string.h>
using namespace std;
//object to class
class student
{
	int rollno,x;
	char name[30];
	public:
	void getdata(int X,char y[20])
	{
		rollno=x;
		strcpy(name,y);
	}
	void putdata()
	{
		cout<<"rollno is= "<<rollno<<endl;
		cout<<"name is "<<name;
		
	}
	
};
int main()
{
	int rn;
	char nam[20];
	cout<<"enter the rollno"<<endl;
	cin>>rn;
	cout<<"enter the name"<<endl;
	cin>>nam;
	class student obj;
	obj.getdata(rn,nam);
	obj.putdata();
}

