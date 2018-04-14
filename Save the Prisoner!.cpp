#include <bits/stdc++.h>
using namespace std;

int saveThePrisoner(int n, int m, int s)
{    
    int p=m+s-1;
    int d=(p-1)/n;
    p-=d*n;
    return p;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        int s;
        cin >> n >> m >> s;
        int result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}
