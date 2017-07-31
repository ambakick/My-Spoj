#include<iostream>

using namespace std;
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return(n*fact(n-1));
}
int main(void)
{
		int p,x,n;
		cin>>n;
		p=1;
		x=2;
		x=fact(n);
		for(int i=0;i<n-1;i++)
		{
			p=p*2+i;
		//	cout<<"p="<<p<<"\n";
		}
		cout<<x+p;
	
}
