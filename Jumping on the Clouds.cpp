#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector <int> c,int n) 
{
    int count=0;
        int i=0;
        while(i<n-1)
        {
            count++;
            if(c[i+2]==1)
            {   
                i=i+1;
            }
            else
            { i=i+2;}
        }
        return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c,n);
    cout << result << endl;
    return 0;
}
