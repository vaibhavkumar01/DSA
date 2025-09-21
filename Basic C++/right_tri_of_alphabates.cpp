#include<iostream>
using namespace std;
int main()
{
    int n,row;

    cout << "Input a number: ";
    cin >> n;

    // outer loop
    for(row=1;row<=n;row++){
        
        // inner loop
        for(char col='A';col<='A' + row -1;col++){
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}