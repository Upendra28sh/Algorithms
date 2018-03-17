#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b,int n,int m) 
{
   int c=0;
   int d=0;
   int e=0;
    
    for(int x= a[n-1];x<=b[0];x++)
    {
          int c=0;
          int d=0;
          
            for(int y=0;y<n;y++)
          {
              if(x%a[y]!=0)
              {
                  c=1;
              }
          }
          for(int z=0;z<m;z++)
          {
              if(b[z]%x!=0)
              {
                  d=1;
              }
          }
        if(c==0&&d==0)
        {
            e++;
        }
        
    }
    
    return e;
    
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b,n,m);
    cout << total << endl;
    return 0;
}
