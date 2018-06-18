#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
   
        bool res=1;
        for(char i='A'; i<='Z'; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(b[j]==i) cnt++;
            }
            if(cnt==1){res=0; break;}     
        }
        if(res){
            int cnt_=0;
            for(int i=0; i<n; i++){
                if(b[i]=='_') cnt_++;
            }
            if(cnt_==0){
                for(int i=1; i<(n-1); i++){
                    if(b[i]!=b[i+1] && b[i]!=b[i-1]) {res=0; break;}
                }
            } 
        }
        if(res) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}