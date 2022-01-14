#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n,temp;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i;j>0;j--)
		{
			if(temp<arr[j-1])
			{
				arr[j]=arr[j-1];
			}
			else 
			break;
		}
		arr[j]=temp;
	}
	for(i=0;i<n;i++)
	cout<<arr[i];
	return 0;
}