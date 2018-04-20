#include <bits/stdc++.h>
using namespace std;

int squares(int a, int b) 
{
    int sqra=sqrt(a);
    int sqrb=sqrt(b);
    int count=sqrb-sqra;
    float a1=sqrt(a);
    if(sqra==a1)
    {
        count++;
    }
    return count;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int a;
        int b;
        cin >> a >> b;
        int result = squares(a, b);
        cout << result << endl;
    }
    return 0;
}
