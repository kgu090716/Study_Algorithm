#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] += 'A' - 'a';
        else
            str[i] += 'a' - 'A';
    }
    cout << str;
    
    return 0;
}