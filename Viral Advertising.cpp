#include <bits/stdc++.h>
using namespace std;

int viralAdvertising(int n) 
{    
    int m=5;
    int i=1;
    int half=0;
    int count=0;
    while(i<=n)
    {
        half=m/2;
        count+=m/2;
        m=half*3;
        i++;        
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int result = viralAdvertising(n);
    cout << result << endl;
    return 0;
}
