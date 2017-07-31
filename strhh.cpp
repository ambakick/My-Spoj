#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n,len;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		len=s.length();
		for(int i=0;i<len/2;i+=2)
		{
			cout<<s[i];
		}
		cout<<"\n";
	}
}
