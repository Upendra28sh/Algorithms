#include <bits/stdc++.h>
using namespace std;

int pickingNumbers(int n,vector <int> a) 
{
    int b[n];
    for(int i=0;i<n;i++)
    {
        int count1=0,count2=0;
        for(int j=0;j<n;j++)
        {
            if((abs(a[j]-a[i])<=1)&&a[j]>=a[i])
                count1++;
            if((abs(a[j]-a[i])<=1)&&a[j]<=a[i])
                count2++;
            if(count1>=count2)
            {
                b[i]=count1;
            }
            else
                b[i]=count2;
        }
    }
    int max=b[0];
    int m=0;
    for(int i=1;i<n;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            m=i;
        }
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = pickingNumbers(n,a);
    cout << result << endl;
    return 0;
}
