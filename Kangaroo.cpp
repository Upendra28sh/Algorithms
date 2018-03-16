#include <bits/stdc++.h>
using namespace std;

void kangaroo(int x1, int v1, int x2, int v2) 
{    
    float a=x1-x2;
    float b=v2-v1;
    float i=a/b;
    int j=a/b;
    if(i>0&&i==j)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
     
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    kangaroo(x1, v1, x2, v2);
    return 0;
}
