#include <bits/stdc++.h>
using namespace std;

int divisibleSumPairs(int n, int k, vector <int> ar) 
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int sum=0;
            sum=ar[i]+ar[j];
            if(i<j&&sum%k==0)
            {
                c++;    
            }
        }
    }
    return c;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}
