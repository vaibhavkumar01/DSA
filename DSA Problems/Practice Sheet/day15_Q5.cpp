/*5. Print all the Capital and small letters using a while loop.
It means A-Z, then a-z.*/

#include<iostream>
using namespace std;
int main()
{
    // All Capital Letters

    char letter = 'A';
    cout << "All Capital Letters A-Z using While loop:\n";
    while(letter <= 'A'+25){
        cout << letter << " ";
        letter ++;
    }
    cout << endl;

    // All Small Letters

    letter = 'a';
    cout << "All Small Letters a-z using While loop:\n";
    while(letter <= 'a'+25){
        cout << letter << " ";
        letter ++;
    }
    cout << endl;
    return 0;
}