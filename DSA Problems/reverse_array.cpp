#include<iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[10000];

    cout << "Make an Array: ";
    for(int i=0;i<size;i++){
    cin >> arr[i];
    }
    int start = 0, end = size-1;
    while(start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout << "Reverse Array: ";
    for (int i=0; i<size; i++)
    cout << arr[i] << " ";
    return 0;
}