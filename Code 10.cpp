//bubble sort
//first iteration is for n-1 times ,second is for n-2 times and so on.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of elements in an array: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of an array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int counter=1;
	while(counter<n)
	{
		for(int i=0;i<n-counter;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}
	cout<<"Hence , the second largest element is: "<<arr[n-2];
	return 0;
}
