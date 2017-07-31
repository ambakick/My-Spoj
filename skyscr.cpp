#include<iostream>
#include<math.h>
#include<limits.h>
#include<algorithm>

using namespace std;
int main()

 {  
 	ios_base::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	long long int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		cout<<abs(n-m)<<"\n";
	}
	return 0;
}
