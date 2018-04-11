#include <bits/stdc++.h>
using namespace std;

int beautifulDays(int i, int j, int k) 
{
    int count=0;
    for(int a=i;a<=j;a++)
    {
        int reverse=0;
        int remainder=0;
        int b=a;
        while(b!=0)
        {
            remainder=b%10;
            reverse=reverse*10+remainder;
            b=b/10;
        }
        int diff=0;
        diff=(abs(a-reverse))%k;
        if(diff==0)
        {
            count++;
        }
        
        
    }
    return count;
    
}

int main() {
    int i;
    int j;
    int k;
    cin >> i >> j >> k;
    int result = beautifulDays(i, j, k);
    cout << result << endl;
    return 0;
}
