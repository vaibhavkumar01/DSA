#include<iostream>
using namespace std;
int main()
{
    // * * * * * * * * * 
    //   * * * * * * *
    //    * * * * * 
    //      * * *
    //        *
    int n,row,col;

    cout << "Enter a Number: ";
    cin >> n;

    //outer loop
    for(row=n;row>=1;row--){
        // inner loop
        // print space
        for(col=1;col<=n-row;col++){
            cout << "  ";
        }
        // print star
        for(col=1;col<=2*row-1;col++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}