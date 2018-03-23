#include <bits/stdc++.h>

using namespace std;
int main() 
{
    int no_items,a;
    cin>>no_items>>a;
    int food[no_items];
    for(int i=0;i<no_items;i++)
    {
        cin>>food[i];
    }
    int total;
    cin>>total;
    int sum=0;
    for(int i=0;i<no_items;i++)
    {
        if(i!=a)
        {
            sum+=food[i];
        }
    }
    
    int sumhalf=0;
    sumhalf=sum/2;
    if(sumhalf==total)
    {
        cout<<"Bon Appetit";
    }
    
    else
    {
        int c=0;
        c=total-sumhalf;
        cout<<c;
    }
    
    return 0;
}
