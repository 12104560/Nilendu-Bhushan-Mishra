#include<iostream>
using namespace std;
//peak elements in an array
int main()
{
	/*int n;
	cout<<"enter the length of an array";
	cin>>n;
	int a[n];
	cout<<"enter the elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"the peak elements are ";*/
	int a[]={5,6,5,1,2,1,7,6,4};
	int n=sizeof(a)/sizeof(a[0]);
	for(int j=1;j<n-1;j++)
	{
		if((a[j]>a[j+1])&&(a[j]>a[j-1]))
		{
			cout<<a[j];
			cout<<" ";
		}
	}
}
