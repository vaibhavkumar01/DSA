#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[10000];
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> prefix(n);

    prefix[0] = arr[0];  // base case

    for(int i = 1; i < n; i++)   // start from 1
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    cout << "Prefix Sum is: ";
    for(int i = 0; i < n; i++)
        cout << prefix[i] << " ";

    return 0;
}