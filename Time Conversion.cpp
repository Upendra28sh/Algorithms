#include <bits/stdc++.h>
using namespace std;

int main() 
{    
    string s;
    int h;
    cin>>s;  
    
    if(s[0]=='1'&&s[1]=='2')
    {
        if(s[8]=='A')
        {
            cout<<"00";
        }
        else
        {
            cout<<s[0]<<s[1]; 
        }
    }
    else if(s[8]=='A')
    {
        cout<<s[0]<<s[1];
    }
    else
    {
        h=((s[0]-'0')*10+(s[1]-'0'))+12;
        if(h<10)
        {
            cout<<"0";
        }
        cout<<h;
    }
    for(int i=2;i<8;i++)
    {
        cout<<s[i];
    }      
    return 0;
}
