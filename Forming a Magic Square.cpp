#include <bits/stdc++.h>
using namespace std;

int formingMagicSquare(vector < vector<int> > s) 
{
    int a[3][3],cost[8];
    a[1][1]=5;
    
    int b[8]={4,2,8,6,8,4,6,2};
    int c[8]={2,4,6,8,4,8,2,6};
    int k=0;
    
    for(int i=0;i<8;i++)
    {
        cost[i]=0;
    }
    
    while(k<=7)
    {
    a[0][0]=b[k];
    a[0][2]=c[k];
    a[2][2]=10-a[0][0];
    a[2][0]=10-a[0][2];
    a[0][1]=15-a[0][0]-a[0][2];
    a[1][0]=15-a[0][0]-a[2][0];
    a[2][1]=10-a[0][1];
    a[1][2]=10-a[1][0];
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cost[k]+=abs(a[i][j]-s[i][j]);
        }
    }
    k++;
    }
    
    int min=cost[0];
    int m=0;
    for(int i=0;i<8;i++)
    {
        if(cost[i]<min)
            min=cost[i];
            m=i;
    }
    return min;
}

int main() {
    vector< vector<int> > s(3,vector<int>(3));
    for(int s_i = 0;s_i < 3;s_i++){
       for(int s_j = 0;s_j < 3;s_j++){
          cin >> s[s_i][s_j];
       }
    }
    int result = formingMagicSquare(s);
    cout << result << endl;
    return 0;
}
