#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,b,c;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+m);
    
    int max=a[0];
    for(int i=0;i<m-1;i++)
    {
        b=(a[i+1]-a[i])/2;
        if(b>max)
        {
            max=b;
        }
    }
    
    c=n-1-a[m-1];

    if(c>max)
    {
        max=c;
    }
    
    cout<<max;
    
    return 0;
}