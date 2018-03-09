#include <bits/stdc++.h>
using namespace std;

void plusMinus(vector <int> arr,float n) 
{
    float a=0;
    float b=0;
    float c=0;
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       if(arr[arr_i]>0)
       {
           a++;
       }
        else if(arr[arr_i]<0)
       {
           b++;
       }
        else 
        {
            c++;
        }
    
    }
    cout<<a/n<<endl;
    cout<<b/n<<endl;
    cout<<c/n<<endl;
    
    
}

int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    plusMinus(arr,n);
    return 0;
}
