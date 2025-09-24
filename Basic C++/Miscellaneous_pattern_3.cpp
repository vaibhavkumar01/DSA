/*Take an input n from the user, and create a pattern like below,
for n=5, we have output like this.

        5
      5 4
    5 4 3
  5 4 3 2
5 4 3 2 1 */


#include<iostream>
using namespace std;
int main()
{
    int n,row,col;

    cout << "Enter a number: ";
    cin >> n;

    // outer loop
    for(row=n;row>=1;row--){
    // inner loop
        // print space
        for(col=1;col<=row-1;col++){
            cout << "  ";
        }
        // print number
        for(col=n;col>=row;col--){
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}