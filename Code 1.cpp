#include<iostream>
using namespace std;
void swap_numbers(int &a ,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
}
int main()
{
	int m,n;
	cout<<"Enter the numbers that you want to swap:";
	
	cin>>m>>n;
	cout<<"The values before swapping are:"<<m<<" "<<n<<endl;
	swap_numbers(m,n);
	cout<<"The values after swapping are:"<<m<<" "<<n<<endl;
	return 0;
}
