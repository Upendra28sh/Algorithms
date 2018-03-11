#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector <int> arr) 
{
    
    unsigned long int min=arr[0];
    unsigned long int b=0;
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
       if (arr[arr_i]<min)
       {
           min=arr[arr_i];
           b=arr_i;
       }
        
    }
    unsigned long int maxcount=0;
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
           maxcount+=arr[arr_i];   
    }
    maxcount=maxcount-min;
    unsigned long int max=arr[0];
    unsigned long int a=0;
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
       if (arr[arr_i]>max)
       {
           max=arr[arr_i];
           a=arr_i;
       }
        
    }
    unsigned long int mincount=0;
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
           mincount+=arr[arr_i];        
    }
    mincount=mincount-max;
    
    cout<<mincount<<" "<<maxcount;
    
}

int main() 
{
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    miniMaxSum(arr);
    return 0;
}
