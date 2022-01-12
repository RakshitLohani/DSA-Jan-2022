#include<bits/stdc++.h>
using namespace std;

void natural_no(int n)
{
	if(n<1)
	return ;
	natural_no(n-1);
	cout<<n<<endl;
}
int main()
{
	int n;
	cin>>n;	
	natural_no(n);
}