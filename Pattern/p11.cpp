#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=1;i<=n/2;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=i||j>=n-i+1)
			cout<<j;
			else
			cout<<" ";
		}
		cout<<endl;
	}
	for(i=n/2+1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>=i||j<=n-i+1)
			cout<<j;
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}