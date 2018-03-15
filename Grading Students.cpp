#include <bits/stdc++.h>
using namespace std;

vector < int > solve(vector < int > grades,int n)
{
    for(int grades_i = 0; grades_i < n; grades_i++)
    {
        if(grades[grades_i]<38)
        {
            continue;
        }
        else 
        {
            for(int i=8;i<=20;i++)
            {
                int a=0;
                int b=0;
                a=5*i;
                //cout<<"a:"<<a<<endl;
                b=(a-grades[grades_i]);
                if(b<3&&b>=0)
                {   //cout<<"B:"<<b<<endl;
                    grades[grades_i]+=b;
                    break;   
                }        
            }   
        }   
    }    
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades,n);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
