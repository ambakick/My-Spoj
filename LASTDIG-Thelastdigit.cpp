#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll t,last;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(b==0)
            cout<<"1"<<endl;
        else if(a==0)
            cout<<"0"<<endl;
        else
        {
             last=a%10;
        if(last==5||last==6||last==1)
        {
            cout<<last<<endl;
        }
        else if(last==2||last==3||last==7||last==8)
        {
            b=b%4;
            if(b==0)
                cout<<(((int)pow(last,4))%10)<<endl;
            else
                cout<<(((int)pow(last,b))%10)<<endl;
        }
        else
        {
            b=b%2;
            if(last==4)
            {
                if(b==0)
                    cout<<"6"<<endl;
                else
                    cout<<"4"<<endl;
            }
            else
            {
                if(b==0)
                    cout<<"1"<<endl;
                else
                    cout<<"9"<<endl;
            }
        }
        }

    }
}
