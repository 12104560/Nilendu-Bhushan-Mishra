#include<iostream>
using namespace std;
int arr[100];
	int mid=51;
	int top1=1;
	int top2=51;
class stack{
	public:

	void push_stack1(int a)
	{
		if(top1>51)
		{
			return;
		}
		arr[top1]=a;
		top1++;
		
	}
	void pop_stack1()
	{
		if(top1<1)
		{
			cout<<"stack underflow"<<endl;
			return ;
		}
		top1--;
	}
	void push_stack2(int a)
	{
		if(top2>101)
		{
			return;
		}
		arr[top2]=a;
		top2++;
	}
	void pop_stack2()
	{
		if(top2<=50)
		{
			cout<<"stack underflow"<<endl;
			return ;
		}
		top2--;
	}
	
	void display_stack1()
	{
		for(int i=1;i<=top1;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	void display_stack2()
	{
		for(int i=51;i<=top2;i++)
		{
			cout<<arr[i]<<" ";
		}	
	}
};
int    main()
{
	stack obj;
	int n,m,t;
	while(n!=5){
		cout<<"enter the stack number to perform operation on that stack "<<endl;
		cout<<"5 exit";
	    cin>>n;
	    if(n==1){
	    	cout<<"operation to perform on stack 1"<<endl;
	    	cout<<"1 push"<<endl;
	    	cout<<"2 pop"<<endl;
	    	cout<<"3 diplay"<<endl;
	    	cin>>m;
	    	if(m==1)
	    	{
	    		cout<<"enter the number"<<endl;
	    		cin>>t;
	    		obj.push_stack1(t);
	    		
			}
			if(m==2)
			{
				obj.pop_stack1();
			}
			if(m==3)
			{
				obj.display_stack1();
			}
		}
		
		if(n==2){
		
	    	cout<<"operation to perform on stack 2"<<endl;
	    	cout<<"1 push"<<endl;
	    	cout<<"2 pop"<<endl;
	    	cout<<"3 diplay"<<endl;
	    	cin>>m;
	    	if(m==1)
	    	{
	    		cout<<"enter the number";
	    		cin>>t;
	    		obj.push_stack2(t);
	    		
			}
			if(m==2)
			{
							obj.pop_stack2();
			}
			if(m==3)
			{
				obj.display_stack2();
			}
		}
	}
	
	
}

























