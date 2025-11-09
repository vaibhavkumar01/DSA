/*1. Take a number n from the user and print all the even numbers
between 1 and n(inclusive). Do this using while and do while loop 
separately.*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    cout << "\nEven numbers using while loop:\n";
    while(i<=n){
        if(i%2==0)
            cout << i << " ";
            i++;
    }

    cout << "\nEven numbers using do while loop:\n";
    i = 1;
    do
    {
        if(i%2==0)
            cout << i << " ";
            i++;
    } while (i<=n);

    cout << endl;

    return 0;
}