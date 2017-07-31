#include <iostream>
using namespace std;

int main() {
	int x=0,flag=0;
	while(1)
	{
		
		cin>>x;
		if(flag==0&&x!=42)
		cout<<x<<"\n";
		else
		flag=1;
	}

	return 0;
}
