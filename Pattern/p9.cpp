#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	char ch;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<2*n;j++)
		{
			if(j==i||j==2*n-i)
			{
				ch='A';
				ch=ch+(n-i);
				cout<<ch;
			}
			else
			cout<<" ";
		}
		
		cout<<endl;
	}
	return 0;
}