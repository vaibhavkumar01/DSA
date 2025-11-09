/*2. Find the factorial of a number n using a while loop and do a while loop.*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int fact=1, i=1;
    while (i<=n)
    {
        fact*=i;
        i++;
    }
    cout << "Factorial of number " << n <<" is: "<< fact;
    
    return 0;
}