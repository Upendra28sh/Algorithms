#include <bits/stdc++.h>
using namespace std;

int findDigits(int n) 
{    
    int a=n;
    int count=0;
    int b;
    int diviser,Quotient;
    while(a!=0)
    {
        Quotient=a/10;
        diviser=a-(Quotient*10);
        if(diviser!=0)
        {
            b=n%diviser;
            if(b==0)
            {
                count++;
            }
        }
        a=Quotient;
    }
    
    return count;
}

int main() 
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = findDigits(n);
        cout << result << endl;
    }
    return 0;
}
