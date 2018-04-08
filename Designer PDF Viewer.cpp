#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

using namespace std;

void designerPdfViewer(vector <int> h, string word) 
{
    int length;
    length = word.size();
    int a[length];
    for(int i=0;i<length;i++)
    {
        a[i]=word[i]-'a';
    }
    int max=h[a[0]];
    int m=a[0];
    for(int j=0;j<length;j++)
    {
        for(int i=0;i<26;i++)
        {
            if(i==a[j])
            {
                
               if(h[i]>max)
               {
                   max=h[i];
                   m=i;
               }
            }
        }
    }
    cout<<max*length;    
}

int main() {
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    designerPdfViewer(h, word);
    return 0;
}
