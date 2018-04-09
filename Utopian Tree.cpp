#include <bits/stdc++.h>
using namespace std;

int utopianTree(int n) 
{
    int i=1;
    int h=1;
    while(i<=n)
    {
        if(i<=n)
        {
            h=2*h;
            i=i+1;
            if(i<=n)
            {
                h=h+1;
                i=i+1;
            }
        }
    }
    
    return h;
}

int main() 
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = utopianTree(n);
        cout << result << endl;
    }
    return 0;
}
