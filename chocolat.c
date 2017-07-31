#include<stdio.h>

int main(void)
{
	int t,i;
	long long int n,m;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld %lld",&n,&m);
		if(n>m)
			printf("Bipin %lld\n",n-m);
		else if(m>n)
			printf("Balaji %lld\n",m-n);
		else
			printf("No Winner\n");
	}
	return 0;
}
