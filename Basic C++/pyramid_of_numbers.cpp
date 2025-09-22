#include<iostream>
using namespace std;
int main()
{
//     Enter a number: 9
//                 1 
//               1 2 1
//             1 2 3 2 1
//           1 2 3 4 3 2 1
//         1 2 3 4 5 4 3 2 1 
//       1 2 3 4 5 6 5 4 3 2 1
//     1 2 3 4 5 6 7 6 5 4 3 2 1
//   1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
// 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1

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