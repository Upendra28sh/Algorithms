#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> m(q);
    for(int m_i = 0; m_i < q; m_i++){
       cin >> m[m_i];
    }
    for(int i=0;i<q;i++)
    {
        int d=m[i]-k%n;
        if(d<0)       
        {
            d=d+n;
        }
        cout<<a[d]<<endl;
    }
    return 0;
}
