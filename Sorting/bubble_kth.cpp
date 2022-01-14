#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,j,k;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<k;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j+1]<arr[j])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(i=0;i<n;i++)
	cout<<arr[i];
	return 0;
}