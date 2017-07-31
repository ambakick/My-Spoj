#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int rev(int x)
{
	int p=0;
	while(x!=0)
	{
		p=p*10+(x%10);
		x=x/10;
	}
	return p;
}
int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,x,i,len,flag,m;
	string a;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>a;
		len=a.length();
		if(len%2!=0)
		{
			if((a[len/2])=='9')
			{

				 flag=0;
				int p;
				m=atoi(a.c_str());
				while(flag==0)
				{
					m++;
					p=rev(m);
					if(p==m)
					{
						flag=2;
					}
				}
			}
			else
			{
				a[len/2]=a[len/2]+1;
				for(i=0;i<len/2;i++)
				{
					a[len-i-1]=a[i];
				}	
			}
		
		}
		else
		{	
			if((a[len/2])=='9')
			{

				 flag=0;
				int p;
				m=atoi(a.c_str());
				while(flag==0)
				{
					m++;
					p=rev(m);
					if(p==m)
					{
						flag=2;
					}
				}
			}
			else if(a[len/2]<a[len/2-1])
			{
				x=len-1;
				for(i=0;i<len/2;i++)
				{
					a[x]=a[i];
					x--;
				}
			}
			else
			{
				x=len-1;
				a[len/2-1]=a[len/2-1]+1;
				for(i=0;i<len/2;i++)
				{
					a[x]=a[i];
					x--;
				}
			}
		}
		if(flag!=2)
		cout<<a<<"\n";
		else
		cout<<m<<"\n";
	}
}
