#include <bits/stdc++.h>
using namespace std;

void climbingLeaderboard(int n,int m,vector <int> score, vector <int> alice) 
{
    int rank=1;
    for(int i=0;i<n;i++)
    {
        if(score[i]!=score[i-1])
        {
            rank++;
        }
    }
    int j=n-1;
    for(int i=0;i<m;i++)
    {
        while(score[j]<=alice[i]&&rank>1)
        {
            if(score[j]!=score[j+1])
            {
                  rank--;
            }
            j--;
        }
        cout<<rank<<endl;
    }   
}

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for(int scores_i = 0; scores_i < n; scores_i++){
       cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       cin >> alice[alice_i];
    }
    climbingLeaderboard(n,m,scores, alice);
    
    return 0;
}
