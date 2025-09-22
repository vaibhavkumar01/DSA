// *                         *
// * *                     * *
// * * *                 * * *
// * * * *             * * * *
// * * * * *         * * * * *
// * * * * * *     * * * * * *
// * * * * * * * * * * * * * *
// * * * * * *     * * * * * *
// * * * * *         * * * * *
// * * * *             * * * *
// * * *                 * * *
// * *                     * *
// *                         *
/*----Taking n from user-----*/

#include<iostream>
using namespace std;
int main()
{
    int n,row,col;

    cout << "Enter a Number: ";
    cin >> n;

/*This will PRINT the UPPER HALF Of the Butterfly Pattern----*/

    // outer loop
    for(row=1;row<=n;row++){

    //inner loop
        
        // print star
        for(col=1;col<=row;col++){
            cout << "* ";
        }

        // print space
        for(col=1;col<=2*(n-row);col++){
            cout << "  ";
        }
        
        //print star
        for(col=1;col<=row;col++){
            cout << "* ";
        }
        cout << endl;
    }

/*This will PRINT the LOWER HALF Of the Butterfly Pattern----*/

    // outer loop
    for(row=n-1;row>=1;row--){

    //inner loop
        
        // print star
        for(col=1;col<=row;col++){
            cout << "* ";
        }

        // print space
        for(col=1;col<=2*(n-row);col++){
            cout << "  ";
        }
        
        //print star
        for(col=1;col<=row;col++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}