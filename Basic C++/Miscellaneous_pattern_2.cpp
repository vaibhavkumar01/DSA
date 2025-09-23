/* Take an input n from the user, and create a pattern like below, 
for n=5, we have output like this.
   
    
        A
      B B
    C C C
  D D D D
E E E E E */

#include<iostream>
using namespace std;
int main()
{
    int row,col,n;

    cout << "Enter a number: ";
    cin >> n;

    //outer loop
    for(row=1;row<=n;row++){
    //inner loop
        //print space 
        for(col=1;col<=n-row;col++){
            cout << "  ";
        }

        // print alphabets
        char ch = 'A' + row - 1;
        for(col=1;col<=row;col++){
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}