#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>0;j--)
		{
			cout<<" ";
		}
		for(j=2*i-1;j>0;j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}