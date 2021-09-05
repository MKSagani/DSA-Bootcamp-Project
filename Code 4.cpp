#include<iostream>
using namespace std;
int fibonacci(int m)
{
	if(m==0)
	{
		return 0;
	}
	else if(m==1)
	{
		return 1;
	}
	else
	{
	return fibonacci(m-2)+fibonacci(m-1);
}
}
int main()
{
	int n;
	cout<<"Enter the number upto which fibonacci series should be written: "<<endl;
	cin>>n;
	
	cout<<"The fibonacci series is given as : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<fibonacci(i)<<" ";
	}
	return 0;
}
