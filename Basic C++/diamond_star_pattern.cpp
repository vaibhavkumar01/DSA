#include<iostream>
using namespace std;
int main()
{
//           * 
//         * * * 
//       * * * * * 
//     * * * * * * * 
//   * * * * * * * * * 
// * * * * * * * * * * * 
//   * * * * * * * * * 
//     * * * * * * * 
//       * * * * * 
//         * * * 
//           * 
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

        // print star
        for(col=1;col<=(2*row)-1;col++){
            cout << "* ";
        }
        cout << endl;
    }
    // printing other half 
    // outer loop
    for(row=n-1;row>=1;row--){
            // print space
        for(col=1;col<=n-row;col++){
            cout << "  ";
        }

        // print star
        for(col=1;col<=(2*row)-1;col++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}