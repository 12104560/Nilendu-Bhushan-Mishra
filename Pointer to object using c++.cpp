//pointer to object
#include<iostream>
#include<string.h> //header file
using namespace std;
class student
{
	int rollno;
	char name[30];
	public:
	void getdata(int x,char y[])   //x=5, y="ram"
	{
		rollno=x;
		//name=y;
		strcpy(name,y);
	}
	void putdata()
	{
		cout<<"rollno is= "<<rollno<<endl;
		cout<<"name is="<<name;
	}
};
main()
{
	class student obj[5];
	class student *p[5];
	int rn; //rn=rollno
	char n[30]; //n=name
	int i;
	for(i=1;i<=5;i++)
	{
		p[i]=&obj[i];
	}
	int rn; //rn=roll no
	char n[30]; //n=name
	for(i=1;i<=5;i++)
	{
	cout<<"enter rollno and name= ";
	cin>>rn>>n; //10  gg
	p[i]->getdata(rn,n); // getdata(10,gg)
}
    cout<<"\n \n";
    for(i=1;i<=5;i++)
    {
	p[i]->putdata();
}
}
