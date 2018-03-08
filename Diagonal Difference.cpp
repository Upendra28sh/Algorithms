#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector < vector<int> > a,int n) 
{
    int a_i,a_j;
    int d=0;
    int b=0;
    int c=0;
    for(a_i = 0;a_i < n;a_i++)
    {
       for(a_j = 0;a_j < n;a_j++)
	  {
          	if(a_i==a_j)
            {	d+=a[a_i][a_j];
            }
          }
    };
    for(a_i = 0,a_j=n-1;a_i < n,a_j>=0;a_i++,a_j--)
    {      
          b+=a[a_i][a_j];            
    };
    c=abs(d-b);
    return c;
}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(a,n);
    cout << result << endl;
    return 0;
}
