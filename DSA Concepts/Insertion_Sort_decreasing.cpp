#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    cout << "Enter the elements of Array: ";
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    //Insertion Sort for Decreasing order:
    for(int i = 1; i < n ; i ++)
    {
        for(int j = i; j >= 0; j--){
            if(arr[j] > arr[j-1])
                // Swap directly
                swap(arr[j],arr[j-1]);
                /* Swaping two numbers:
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                */
            else
                break; // stop when correct position is found
        }
    }

    cout << "Sorted Array in Decreasing order: ";
    for(int i = 0; i < n; i ++)
        cout << arr[i] << " ";

    return 0;
}