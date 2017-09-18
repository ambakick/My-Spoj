#include<bits/stdc++.h>

using namespace std;

int main(void)
{
	string s;
	int l;
	while(cin>>l)
	{
		cin>>s;
		for(int i=0;i<l;i++)
		{
			int j=0;
			int k=0;
			while(i+j<s.length())
			{
				if(k%2==0)
				{
					cout<<s[j];
				}
				else
				{
					cout<<(s[(k+1)*l-1]);
				}
				j+=l;
				k++;
			}
		}
	}
}