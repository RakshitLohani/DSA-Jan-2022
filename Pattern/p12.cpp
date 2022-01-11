#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,fib,first=0,second=1;
	cin>>n;
	cout<<1<<endl;
	for(i=1;i<=n;i++)
	{
		
		for(j=0;j<=i;j++)
		{
			fib=first+second;
			first=second;
			second=fib;
			cout<<fib<<" ";
		}
		cout<<endl;
	}
	return 0;
}