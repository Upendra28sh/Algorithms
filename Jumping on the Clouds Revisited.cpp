#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector <int> c, int k,int n) 
{
    int e=100;
    for(int i=0;i<n;i+=k)
    {
        if(c[i]==0)
        {
            e-=1;
        }
        else
            e-=3;
    }
    return e;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c, k,n);
    cout << result << endl;
    return 0;
}
