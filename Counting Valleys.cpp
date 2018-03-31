#include <bits/stdc++.h>
using namespace std;

int countingValleys(int n, string s) {
    
    int count=0;
    int valleys=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            count++;
        }
        else if(s[i]=='D')
        {
            count--;
        }
        if(count==0&&(i>0))
        {
            
            if(s[i]=='U')
            {
                valleys++;
            }
        }
              
    }
        return valleys;
    
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = countingValleys(n, s);
    cout << result << endl;
    return 0;
}
