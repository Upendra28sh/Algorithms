#include <bits/stdc++.h>
using namespace std;

void solve(int year)
{
    int date=13;
    int month=9;
    if((year>=1700&&year<=1917)&&(year%4==0))
    {
        date-=1;
    }
    if((year>=1919&&year<=2700)&&(year%400==0||((year%4==0)&&(year%100!=0))))
    {
        date-=1;
    }  
    if(year==1918)
    {
        date=26;
    }
    cout<<date<<".0"<<month<<"."<<year;
    
}

int main() {
    int year;
    cin >> year;
    solve(year);
    return 0;
}
