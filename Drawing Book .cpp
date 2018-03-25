#include <bits/stdc++.h>
using namespace std;

int solve(int n, int p)
{    
       int front=0;
       int back=0;
       front=(p-0)/2;
       back=(n-p)/2;
       
       if(front<=back)
       {
           return front;
       }
       else
       {
           if(n%2==0&&p%2!=0)
           {
               return back+1;
           }
           else
           return back;    
       } 
}

int main() 
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
