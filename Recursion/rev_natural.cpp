#include<bits/stdc++.h>
using namespace std;

void rev_natural(int n)
{
	if(n<1)
	return ;
	cout<<n<<endl;
	rev_natural(n-1);
	
}
int main()
{
	int n;
	cin>>n;
	rev_natural(n);
}