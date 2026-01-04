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

    // Sorting in Increasing order(using INSERTION SORT algorithm)

    for(int i = 0; i < n; i ++)
    {
        for(int j = i; j > 0; j--){
            if(arr[j] < arr[j-1])           // Applying from Start (reverse the sign to apply the logic from end)
                swap(arr[j],arr[j-1]);
                /* Swaping two numbers:
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                */
            else 
                break;
        }
    }

    cout << "Sorted Array in Increasing order: ";
    for(int i = 0; i < n; i ++)
        cout << arr[i] << " ";

    return 0;
}