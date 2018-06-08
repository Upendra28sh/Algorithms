#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<string> split_string(string);

int howManyGames(int p, int d, int m, int s) 
{
    int count=0;
    while(s>=p)
    {
        s-=p;
        count++;
        p=p-d;
        if(p<=m)
        {
            p=m;
        }
    }
    return count;
}

int main()
{
    int p,d,m,n;
    cin>>p>>d>>m>>n;
    int result=howManyGames(p,d,m,n);
    cout<<result;
    return 0;
}
