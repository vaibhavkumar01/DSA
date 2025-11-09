#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[10000];

    for(int i=0;i<size;i++){
    cin >> arr[i];
    
    cout << arr[i] << " ";
    }

// Min value 
    int ans = INT_MAX;
    for (int i=0; i<size; i++){
        if(arr[i]<ans)
        ans = arr[i];
    }
    cout <<"\nMinimum Value = "<< ans << endl;

// Max value 
    ans = INT_MIN;
    for (int i=0; i<size; i++){
        if(arr[i]>ans)
        ans = arr[i];
    }
    cout <<"Maximum Value = "<< ans << endl;

    return 0;
}