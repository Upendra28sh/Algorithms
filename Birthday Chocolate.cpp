#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector < int > s, int d, int m)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        int a=i+m;
        for(int j=i;j<a;j++)
        {
            sum+=s[j];
            
        }
        if(sum==d)
            {
                c++;   
            }
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
