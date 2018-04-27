#include <bits/stdc++.h>
using namespace std;

int n,m;
string topic[1000];

void acmTeam() 
{
    string b="1";
    int count=0;
    int max=0;
    int a=0;
    for(int i=0;i<n-1;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            for(int j=0;j<m;j++)
            {
                
                if((topic[i][j]=='1')||(topic[k][j]=='1'))
                {
                    count++;
                }
            }
            if(count==max)
            {
                a++;    
            }
            
            if(count>max)
            {
                max=count;
                a=1;
            } 
            count=0;
                    
        }  
    }
    
    cout<<max<<endl;
    cout<<a;
    
    
}

int main() {

    cin >> n >> m;
    
    for(int topic_i = 0; topic_i < n; topic_i++){
       cin >> topic[topic_i];
    }
    
    acmTeam();
    return 0;
}
