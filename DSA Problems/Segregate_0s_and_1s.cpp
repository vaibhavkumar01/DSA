#include<iostream>
using namespace std;

// Function to Segregate 0s and 1s
void segregate0and1(int arr[], int n) {
    // code here
    int start = 0, end = n - 1;

    while (start < end)
    {
        if(arr[start] == 0)
            start ++;
        else
        {
            if(arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start ++, end --;
            }
            else
                end --;
        }
    }
}

int main()
{
    int n, arr[10000];
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter array containing only 0s and 1s in random order: ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];

    segregate0and1(arr, n);
    cout << "Array after segregation of 0s and 1s: ";
    for(int i = 0; i < n; i++)
    cout << arr[i] << " ";

    return 0;
}