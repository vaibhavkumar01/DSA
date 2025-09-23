#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    
    cout << "Enter a number: ";
    cin >> n;
    
    int count = 1;

    //outer loop
    for(row=1;row<=n;row++){
        // inner loop
        for(col=1;col<=row;col++){
            cout << count << "  ";
            count = count + 1;
        }
        cout << endl;
    }
    return 0;
}