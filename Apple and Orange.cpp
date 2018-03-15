#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector <int> apples, vector <int> oranges,int m,int n) 
{
    int count1=0;
    int count2=0;
    
   for(int apple_i = 0; apple_i < m; apple_i++)
    {
       apples[apple_i]+=a;
    }
    
    for(int apple_i = 0; apple_i < m; apple_i++)
    {
       if(apples[apple_i]>=s&&apples[apple_i]<=t)
           count1++;
    }
    
    for(int orange_i = 0; orange_i < n; orange_i++)
    {
        oranges[orange_i]+=b;
    }
    
    for(int orange_i = 0; orange_i < n; orange_i++)
    {
        if(oranges[orange_i]>=s&&oranges[orange_i]<=t)
           count2++;
    }
    cout<<count1<<endl<<count2;
    
}

int main() {
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       cin >> orange[orange_i];
    }
    countApplesAndOranges(s, t, a, b, apple, orange,m,n);
    return 0;
}
