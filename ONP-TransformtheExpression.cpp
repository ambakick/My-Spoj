#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    for(cin>>t;t;t--)
    {
        stack <char> operators;
        char cur;
        string input;
        cin>>input;
    int len=input.length();
        //cout<<len;
        for(int i=0;i<len;i++)
        {

            if(input[i]>='a'&&input[i]<='z')
                cout<<input[i];
            else if(input[i]=='(')
                operators.push(input[i]);
            else if(input[i]==')')
            {
                do{
                    cur=operators.top();
                    if(cur!='(')
                           cout<<cur;
                    operators.pop();
                }
                while(cur!='(');
            }
            else if(input[i]=='^')
                        operators.push(input[i]);
            else if(input[i]=='/')
            {
                if(operators.top()!='^')
                {
                    operators.push(input[i]);
                }
                else
                {
                    do{
                    cur=operators.top();
                    if(cur!='(')
                           cout<<cur;
                    if(cur!='(')
                    operators.pop();
                    }
                    while(cur!='(');
                    operators.push(input[i]);
                }
            }
            else if(input[i]=='*')
            {
                if(operators.top()=='+'||operators.top()=='-'||operators.top()=='*')
                {
                    operators.push(input[i]);
                }
                else
                {
                    do{
                    cur=operators.top();
                    if(cur!='(')
                           cout<<cur;
                    if(cur!='(')
                    operators.pop();
                    }
                    while(cur!='(');
                    operators.push(input[i]);
                }

            }
             else
            {
                if(operators.top()=='+'||operators.top()=='-')
                {
                    operators.push(input[i]);
                }
                else
                {
                    do{
                    cur=operators.top();
                    if(cur!='(')
                           cout<<cur;
                    if(cur!='(')
                    operators.pop();
                    }
                    while(cur!='(');
                    operators.push(input[i]);
                }

            }
        }
        cout<<endl;
    }


}
