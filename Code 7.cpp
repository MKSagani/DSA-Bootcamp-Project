#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int N,d,i;
	cin>>N>>d;
	int start=N-d;
	int *arr=new int[N];
	for(int i=0;i<N;++i)
	{
		if(start==N)
		{
			start=0;
		}
		cin>>arr[start++];
	}
	for(i=0;i<N;++i)
	{
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}
