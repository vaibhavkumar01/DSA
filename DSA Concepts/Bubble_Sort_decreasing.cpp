// Sorting in Decreasing order(using BUBBLE SORT algorithm)
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
    //Logic part for Decreasing order:
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j ++){

            if(arr[j] < arr[j + 1]){
                swap(arr[j],arr[j + 1]);
            }
        }
    }
    cout << "Sorted Array in Decreasing order: ";
    for(int i = 0; i < n; i ++)
        cout << arr[i] << " ";
    return 0;
}