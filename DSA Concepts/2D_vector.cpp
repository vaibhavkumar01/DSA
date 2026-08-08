#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // create 2D vector
    int n,m;
    cout << "Enter rows and cols: ";
    cin >> n >> m;
    vector<vector<int> >matrix(n,vector<int>(m,0));

    // user input
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    cin >> matrix[i][j];
    
    // output
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        cout << matrix[i][j] << " ";
        cout << endl;
    }

    // to find no. of rows
    cout << "Rows = " << matrix.size();
    cout << endl;
    cout << "Cols = " << matrix[0].size();
}