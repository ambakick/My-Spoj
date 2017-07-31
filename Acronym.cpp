#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	int count=0,len,flag=0,letter=0;
	string line;
	getline(cin,line);
	len=line.length();
	for(int i=0;i<len;i++)
	{
		letter=0,flag=0;
		
		if(line[i]>=65&&line[i]<=90)
		{
			letter++;
			i++;
			while(line[i]!=' '&&i<len)
			{
				if(line[i]>=65&&line[i]<=90)
				{
					letter++;
				}
				else
				{
					letter=0;
					flag=1;
					while(line[i]!=' '&&i<len)
						i++;
					i--;
					break;
				}
				i++;
			}
			
			if(flag==0&&letter>1)
				count++;
		}
		else if(line[i]==' ')
		{
			continue;
		}
		else
		{
			while(line[i]!=' '&&i<len)
					{
					i++;	}	
					i--;
					continue;
		}	
	}
	
	
	cout<<count;
	return 0;
}
