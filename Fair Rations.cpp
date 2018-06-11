#include <cmath>
#include <cstdio>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int a;
    cin>>a;
    int b[a],c[a];
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }
    
    for(int i=0;i<a;i++)
    {
        c[i]=b[i]%2;
    }
    
    int flag=0;
    int count=0;
    for(int j=0;j<a;j++)
    {
        if(flag==0&&c[j]==1)
        {
            flag=1;
            count+=1;
        }
        else if(flag==1&&c[j]==0)
        {
            count+=2;
        }
        else if(flag==1&&c[j]==1)
        {
            flag=0;
            count+=1;
        }
    }
    
    if(flag==0)
    {
        cout<<count;
    }
    else
        cout<<"NO";
    
    return 0;
}
