#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(vector < int > keyboard, vector < int > drives, int s,int n,int m)
{
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-j-1;i++)
        {
            if(keyboard[i]>keyboard[i+1])
            {
                int temp=0;
                temp=keyboard[i];
                keyboard[i]=keyboard[i+1];
                keyboard[i+1]=temp;
            }
        }
    }
    
    for(int j=0;j<m-1;j++)
    {
        for(int i=0;i<m-j-1;i++)
        {
            if(drives[i]>drives[i+1])
            {
                int temp=0;
                temp=drives[i];
                drives[i]=drives[i+1];
                drives[i+1]=temp;
            }
        }
    }
    
    int max=-1;
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(keyboard[i]+drives[j]<=s)
            {
                sum=keyboard[i]+drives[j];
                if(sum>max)
                {
                    max=sum;
                }
            }
        }
    }
    
    return max;
    
    }


int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    int moneySpent = getMoneySpent(keyboards, drives, s,n,m);
    cout << moneySpent << endl;
    return 0;
}
