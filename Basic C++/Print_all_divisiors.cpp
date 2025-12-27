/* #include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "All Divisors are: \n" ;
    for(int i = 0; i < n; i++)
    {
        cout << i << " ";
    }
    return 0;
}

// Time complexity = O(n) 
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "All Divisors are: \n" ;
    for(int i = 0; i <= sqrt(n); i++)
    {
        cout << i << " ";
    }
    return 0;
}
