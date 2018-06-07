#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];

    for (int i = 0; i < n; i++) 
    {
        cin>>arr[i];
    }

    int index=1;
    int value;
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        value=arr[i];
        for(int j=1;j<=value;j++)
        {
            if(j==index)
            {
                count++;
            }
            if((j%k==0)&&(j!=value))
            {
                index=index+1;
            }
        }
        index=index+1;
    }
    cout<<count;

    return 0;
}
