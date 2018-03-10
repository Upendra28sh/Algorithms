#include <bits/stdc++.h>
using namespace std;

void staircase(int n) 
{    
    for(int i=1; i<=n;i++)
    {       
            for(int k=0;k<n-i;k++)
            {
                cout<<" ";
            }
            for(int l=1;l<=i;l++)
            {
                cout<<"#";
            }
        
        cout<<endl;
    }
}

int main() 
{
    int n;
    cin >> n;
    staircase(n);
    return 0;
}
