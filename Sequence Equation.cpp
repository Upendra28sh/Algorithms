#include <bits/stdc++.h>
using namespace std;

void permutationEquation(vector <int> p,int n) 
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+1==p[j])
            {
                for(int k=0;k<n;k++)
                {
                    if(j+1==p[k])
                    {
                        cout<<k+1<<endl;
                    }
                }
            }
        }
    }
}

int main() 
{
    int n;
    cin >> n;
    vector<int> p(n);
    for(int p_i = 0; p_i < n; p_i++){
       cin >> p[p_i];
    }
    permutationEquation(p,n);
    return 0;
}
