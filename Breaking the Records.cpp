#include <bits/stdc++.h>
using namespace std;

void breakingRecords(vector <int> score,int n) 
{
    int highest=score[0];
    int high=0;
    int lowest=score[0];
    int low=0;
    
    for(int score_i = 0; score_i < n; score_i++)
    {
       if(score[score_i]>highest)
       {
           highest=score[score_i];
           high++;
       }
        
        if(score[score_i]<lowest)
       {
           lowest=score[score_i];
           low++;
       }
        
    }
    cout<<high<<" "<<low;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    breakingRecords(score,n);
    return 0;
}
