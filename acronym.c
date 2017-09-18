#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	int count=0;
	string line;
	getline(cin,line);
	len=strlen(line);
	for(int i=0;i<line;i++)
	{
		if(line[i]==" ")
			{
				if(flag==0)
					count++;	
			}
		if(line[i]>=65&&line[i]<=90)
		{
			
		}
		else
		{
			while(line[i]!=" "&&i<line)
			{
				i++;
			}
			flag=1;
			i--;
			continue;
		}
	}
	cout<<count;
	return 0;
}
