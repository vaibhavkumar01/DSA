#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canDivide(vector<int> arr)
{
    int n = arr.size(), ans;

    // Total Sum
    int totalSum = 0;
    for(int i = 0; i < n; i ++)
    totalSum += arr[i];

    int prefix = 0;
    for(int i = 0 ; i < n - 1; i ++)
    {
        prefix += arr[i];
        ans = totalSum - prefix;
        if(ans == prefix)
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the element in array: ";
    for(int i = 0; i < n; i ++)
    cin >> arr[i];

    cout << "Does it can be divided in two equal subarray: " << endl;
    cout << (canDivide(arr) ? "Yes" : "No");
    return 0;
}