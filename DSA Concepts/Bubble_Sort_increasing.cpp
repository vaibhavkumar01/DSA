/* Bubble Sort:- Bubble Sort is a simple comparison-based sorting 
algorithm that repeatedly swaps adjacent elements if they are in 
the wrong order, gradually moving the largest (or smallest) elements 
to their correct positions with each pass. 
It’s easy to understand but inefficient for large datasets due to its 
𝑂(𝑛^2) average and worst-case time complexity.

(n-1) rounds.

LOGIC(or pseudo code):-

for(j = 0; j < n-1; j ++)
{
    if(arr[j] > arr[j+1])
        swap(arr[j],arr[j+1])
}

TIME COMPLEXITY:
BEST CASE: O(N^2)
AVG CASE: O(N^2)
WORST CASE: O(N^2)
*/

// Sorting in Increasing order(using BUBBLE SORT algorithm)
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
    //Logic part for Increasing Order
    for(int i = n-2; i >= 0; i --)
    {
        bool swapped = 0;
        // for(int j = i; j >= 0 ; j --)       //making bubble from backside
        for(int j = 0; j <= i ; j ++)         // making bubble from frontside
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }

    // If no elements were swapped, the array is already sorted
        if(swapped == 0) 
        break;
    }

    cout << "Sorted Array in Increasing order: ";
    for(int i = 0; i < n; i ++)
        cout << arr[i] << " ";
    return 0;
}