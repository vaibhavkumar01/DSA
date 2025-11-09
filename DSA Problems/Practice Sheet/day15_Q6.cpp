/*6. Give a number n, find if it is prime or not,
use a while loop and break here to solve it.*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n <= 1){
        cout << n << " is not a Prime number." << endl;
        return 0;
    }

    int i = 2;
    bool isPrime = true;

    while(i <= n / 2) {
        if(n % i == 0){
            isPrime = false;
            break;
        }
        i++;
    }

    if(isPrime)
        cout << n << " is a Prime number." << endl;
    else 
        cout << n << " is not a Prime number." << endl;

    return 0;
}