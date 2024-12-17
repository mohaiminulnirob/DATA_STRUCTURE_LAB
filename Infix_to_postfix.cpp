#include<bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if(c=='^')
        return 3;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='+' || c=='-')
        return 1;
    else return -1;
}
string infix_to_postfix(string s)
{
    s+=')';
    stack<char>st;
    st.push('(');
    string res;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]>='a' && s[i]<='z') || s[i]>='A' && s[i]<='Z')
           res+=s[i];
        else if(s[i]=='(')
            st.push(s[i]);
        else if(s[i]==')')
        {
            while(st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(st.top()!='(' && prec(st.top())>=prec(s[i]))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    return res;
}
int main()
{
    string s;
    cin>>s;
    string res=infix_to_postfix(s);
    cout<<res<<endl;
    return 0;
}
