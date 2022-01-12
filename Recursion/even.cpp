#include<bits/stdc++.h>
using namespace std;

void even_no(int n)
{
	if(n<1)
	return ;
	even_no(n-1);
	if(n%2==0)
	cout<<n<<endl;
}
int main()
{
	int n;
	cin>>n;	
	even_no(n);
}