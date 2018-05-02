#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) 
{
    int len=0;
    int count=1;
    len=s.length();
    for(int i=0;i<len;i++)
    {
        if(isupper(s[i]))
        {
            count++;
        }
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    int result = camelcase(s);
    cout << result << endl;
    return 0;
}
