/*Take an input n from the user, and create a pattern like below,
for n=5, we have output like this.

     *
    * *
   * * *
  * * * *
 * * * * *  
*/

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
        // printing space
        for(col=1;col<=n-row;col++){
            cout << " ";        //single space
        }
        // print star
        for(col=1;col<=row;col++){
            cout << " *";       //space befor star
        }
        cout << endl;
    }

    return 0;
}