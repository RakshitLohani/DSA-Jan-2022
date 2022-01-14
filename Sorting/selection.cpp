#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,min,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			min=j;
		}
		swap(arr[i],arr[min]);
	}
	for(i=0;i<n;i++)
	cout<<arr[i];
}