#include<bits/stdc++.h>

using namespace std;

int convint(int a)
{
    int p=a-'0';
    return p;
}

int main(void)
{
    string s;
    while(cin>>s)
    {
        int len=s.length(),z[len+1],flag=0,i;
        if(len==1&&s[len-1]=='0')
        {
            flag=1;
        }
        else if(len==1)
        {
            cout<<"1\n";
            flag=1;
        }
        else if(s[0]=='0')
        {
            cout<<"0\n";
            flag=1;
        }
        else if(s[len-1]=='0'&&s[len-2]=='0')
        {
            cout<<"0\n";
            flag=1;
        }
        else
        {
            z[len]=1;
            if(s[len-1]!='0')
            z[len-1]=1;
            else
            z[len-1]=0;
            for(i=len-2;i>=0;i--)
            {

                if(s[i]=='0'&&s[i-1]=='0')
                {

                    cout<<"0\n";
                    flag=1;
                    break;
                }
                else
                {
                  if(s[i]=='0'/*&&convint(s[i-1])>2*/)
                    z[i]=0;                             //a string cannot start with 0
                    else
                    {
                        if(convint(s[i])==2)
                        {
                            if(convint(s[i+1])<7)
                                z[i]=z[i+1]+z[i+2];
                            else
                                z[i]=z[i+1];
                        }
                        else if(convint(s[i])<2)
                        {
                            z[i]=z[i+1]+z[i+2];
                        }
                        else
                        {
                            z[i]=z[i+1];
                        }
                    }


            }

        }
       /* for(int i=0;i<=len;i++)
            cout<<z[i]<<" ";*/
        if(flag==0)
            cout<<z[0]<<"\n";

    }
}
return 0;
}
