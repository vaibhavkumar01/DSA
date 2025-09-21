#include<iostream>
using namespace std;
int main()
{
    int n,row,col;

    cout << "Input a Number: ";
    cin >> n;

    // outer loop
    for(row=1;row<=n;row++){
        // inner loop
        for(col=n;col>=row;col--){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}