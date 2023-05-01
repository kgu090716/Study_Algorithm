#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1)
    {
        stack<char> S;
        string str;
        bool tf = 1;
        getline(cin, str);
        if(str == ".")
            break;
        for(auto a : str)
        {
            if(a == '(' || a == '[')
                S.push(a);
            if(a == ')')
            {
                if(S.empty() || S.top() != '(')
                {
                    tf = 0;
                    break;
                }
                else
                {
                    S.pop();
                }
            }
            if(a == ']')
            {
                if(S.empty() || S.top() != '[')
                {
                    tf = 0;
                    break;
                }
                else
                {
                    S.pop();
                }
            }
        }
        if(!S.empty())
            tf = 0;
        if(tf)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
   }
}