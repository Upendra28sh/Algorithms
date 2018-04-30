#include <bits/stdc++.h>
using namespace std;

int minimumDistances(vector <int> a,int n) 
{
    int min=n+1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j&&a[i]==a[j])
            {
                int diff=0;
                diff=abs(i-j);
                if(diff<min)
                {
                    min=diff;
                }
                
            }
        }
    }
    if(min==n+1)
    {
        return -1;
    }
    return min;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = minimumDistances(a,n);
    cout << result << endl;
    return 0;
}
