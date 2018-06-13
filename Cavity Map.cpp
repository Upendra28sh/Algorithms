#include <bits/stdc++.h>

using namespace std;

vector <string> cavityMap(vector <string> arr)
{
    int n = arr.size() ;
    for(int i = 1 ; i < n-1 ; i++) //ignoring first and last rows
    {
        for(int j = 1 ; j < n-1 ; j++) //ignoring first and last columns
        {
            if(   arr[i][j]-48 > arr[i-1][j]-48 &&
                   arr[i][j]-48 > arr[i+1][j]-48 &&
                   arr[i][j]-48 > arr[i][j-1]-48 &&
                   arr[i][j]-48 > arr[i][j+1]-48)
                arr[i][j] = 'X';
        }
    }
    return arr ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
