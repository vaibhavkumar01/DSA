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

    vector<int> suffix(n);

    suffix[n - 1] = arr[n - 1];  // base case: last element

    for(int i = n - 2; i >= 0; i--)   // start from 1
    {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    cout << "Suffix Sum is: ";
    for (int i = 0; i < n; i++)
        cout << suffix[i] << " ";

    return 0;
}