#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() 
{
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++)
    {
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        
 
        int catA=0;
        int catB=0;
        catA=abs(x-z);
        catB=abs(y-z);
        if(catA>catB)
        {
            cout<<"Cat B";
        }
        else if(catB>catA)
        {
            cout<<"Cat A";       
        }
        else
        {
            cout<<"Mouse C";
        }
        cout<<endl;   
    }    
    return 0;
    
}
