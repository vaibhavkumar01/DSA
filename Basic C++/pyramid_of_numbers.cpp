#include<iostream>
using namespace std;
int main()
{
    int n,row,col;

    cout << "Enter a number: ";
    cin >> n;

    // outer loop
    for(row=1;row<=n;row++){
        // inner loop
    // print space
        for(col=1;col<=n-row;col++){
            cout << "  ";
        }
    // print number from 1 to row
        for(col=1;col<=row;col++){
            cout << col << " ";
        }
    // print number from (row-1) to 1
        for(col=row-1;col>=1;col--){
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}