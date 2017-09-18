#include<iostream>

using namespace std;
int convint(char a)
{
    int p=int(a)-int('0');
    return p;
}
int main(void)
{
    int t,i;
    string s;

    while(cin>>s)
    {
        int len=s.length();
        int a[len+1];
         if(len==1)
            cout<<"1\n";
        else if((s[len-1]=='0'&&convint(s[len-2])>2)||s[0]=='0')
        {
            cout<<"0\n";
        }
        else
        {

            a[len]=1;
            a[len-1]=1;
            for(i=len-2;i>=0;i--)
            {
                int x;
                if(s[i]=='0')
                {

                    if(convint(s[i-1])>2)
                    {
                        cout<<"0\n";
                        break;
                    }
                    else if(convint(convint(s[i-1]==0)))
                            {
                                cout<<"0\n";
                                    break;
                            }
                    else
                    {
                        a[i]=a[i+1];
                    }
                }
             else if(convint(s[i])>2)
                    a[i]=a[i+1];
                else if(convint(s[i])<=2)
                {
                    if(convint(s[i+1])<=6)
                        a[i]=a[i+1]+a[i+2];
                    else
                        a[i]=a[i+1];
                }
                else
                {
                    a[i]=a[i+1]+a[i+2];
                }
            }
           // cout<<a[0]<<"\n";
        }
    }
}
