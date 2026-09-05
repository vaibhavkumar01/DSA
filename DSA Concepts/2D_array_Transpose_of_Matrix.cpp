#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& mat) {
    // code here
        
    int n = mat.size();
        
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
        
    return mat;
}

int main () {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<vector<int>> result = transpose(mat);

    cout << "Transpose Matrix: " << endl;
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}