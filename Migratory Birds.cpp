#include <bits/stdc++.h>
using namespace std;

static int migratoryBirds(int n, vector <int> ar) 
{
    long int a[5];
    for(int j=0;j<5;j++)
    {
        a[j]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]==1)
        {
            a[0]+=1;
        }
        
        else if(ar[i]==2)
        {
            a[1]+=1;
        }
        
        else if(ar[i]==3)
        {
            a[2]+=1;
        }
        
        else if(ar[i]==4)
        {
            a[3]+=1;
        }
        
        else if(ar[i]==5)
        {
            a[4]+=1;
        }
    }
    
    long int max=a[0];
    long int m=0;
    for(int k=0;k<5;k++)
    {
        if(a[k]>max)
        {
            max=a[k];
            m=k;
        }
    }
        return m+1;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
