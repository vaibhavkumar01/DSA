/* Take an input n from the user, and create a pattern like below,
   for n=5, we have output like this.

        E
      E D
    E D C
  E D C B
E D C B A */


#include<iostream>
using namespace std;
int main()
{
    int n,row,col;

    cout << "Enter a number: ";
    cin >> n;

    // outer loop
    for(row=n;row>=1;row--){
        // print space
        for(col=1;col<=row-1;col++){
            cout << "  ";
        }
        // start from the top letter for this pattern (e.g. 'E' when n == 5)
        char ch = 'A' + n - 1;

        // printing letters 
        for(col=n;col>=row;col--){
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
    return 0;
}