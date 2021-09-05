#include<iostream>
using namespace std;
int largest_number(int a, int b, int c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>a && b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
int main()
{
	int m,n,p;
	cout<<"Enter the values of three numbers : "<<endl;
	cin>>m>>n>>p;
	cout<<"The largest number among three is: "<<largest_number(m,n,p)<<endl;
	return 0;
}
