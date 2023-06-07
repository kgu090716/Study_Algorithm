#include <bits/stdc++.h>
using namespace std;
vector<string> v;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string st;
    int len;
    cin >> st;
    len = st.length();
    for(int i = 0; i < len; i++) 
    {
        for(int j = 0; j < len; j++)
        {
            for(int z = 0; z < len; z++)
            {
                if(i>=1 && j >= 1 && z>=1 && (i+j+z == len))
                {
                    string s1 = st.substr(0,i);
                    reverse(s1.begin(), s1.end());
                    string s2 = st.substr(i,j);
                    reverse(s2.begin(), s2.end());
                    string s3 = st.substr(i+j,z);
                    reverse(s3.begin(), s3.end());
                    string res = s1+s2+s3;
                    v.push_back(res);
                }
            }
        }
    }
    sort(v.begin(), v.end());
    cout << v[0] << '\n';
    return 0;
}