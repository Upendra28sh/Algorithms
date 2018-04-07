#include <bits/stdc++.h>
using namespace std;

int hurdleRace(int k, vector <int> height,int n) 
{
    int max=height[0];
    int m=0;
    for(int height_i = 0; height_i < n; height_i++)
    {
       if(height[height_i]>max)
       {
            max=height[height_i];
            m=height_i;
       }
    }
    int diff=0;
    if(k>max)
    {
        return 0;
    }
    else
    {
        diff=max-k;
        return diff;
    }
    
    
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    int result = hurdleRace(k, height,n);
    cout << result << endl;
    return 0;
}
