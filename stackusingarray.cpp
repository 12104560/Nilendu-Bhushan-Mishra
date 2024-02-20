#include<iostream>
using namespace std;
int top=-1;
class stack

{
	public:
	 
		int arr[100];
	

void push(int a)
{
	if(top>100)
	{
		cout<<"stack is fll";
		return ;
	}
	top++;
	arr[top]=a;
}
void pop()
{
	if(top>=0)
	{
		
		top--;
		
	}
	if(top==-1)
	{
		cout<<"stack underflow"<<endl;
	}
	
}
void show()
{
	if(top==-1)
	{
		cout<<"stack is empty"<<endl;
		return ;
	}
	for(int i=0;i<=top;i++)
	{
		cout<<arr[i]<<" ";
	}
}

};

int main()
{

	stack obj;
	int n,a;
	
	
	while(n!=4)
	{
		cout<<"enter the operation to perform";
		cout<<endl<<"1 push";
		cout<<endl<<"2 pop";
		cout<<endl<<"3 display stack";
		cout<<endl<<"4 exit"<<endl;
		cin>>n;
		if(n==1)
		{
			cout<<"enter the number";
			cin>>a;
			obj.push(a);
		}
		if(n==2)
		{
			obj.pop();
		}
		if(n==3)
		{
			obj.show();
		}
	}
	
	
	
}
