#include <bits/stdc++.h>

using namespace std;

int chocolateFeast(int n, int c, int m) 
{
    int iw=0;
    iw=n/c;
    int count=iw;
    int nw=0;
    int r=0;
    int a=iw;
    
    while(a>=m)
    {
    nw=a/m;
    r=a%m;
    count+=nw;
    a=r+nw;
    }
        
    return count;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int result = chocolateFeast(n, c, m);
        cout << result << endl;
    }
    return 0;
}
