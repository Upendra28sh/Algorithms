#include <bits/stdc++.h>
using namespace std;

void sockMerchant(int n, vector <int> ar) 
{    
    for(int j=0;j<n-1;j++)
    {
    for(int ar_i = 0; ar_i < n-j-1; ar_i++)
    {
       if(ar[ar_i]>ar[ar_i+1])
       {
           int temp=0;
           temp=ar[ar_i];
           ar[ar_i]=ar[ar_i+1];
           ar[ar_i+1]=temp;
       }
    }
    }
    int c=0;
    for(int ar_i = 0; ar_i < n; ar_i++)
    {
       if(ar[ar_i]==ar[ar_i+1])
       {
           c++;
           ar_i++;
       }
    }
    
    cout<<c;    
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    sockMerchant(n, ar);
    return 0;
}
