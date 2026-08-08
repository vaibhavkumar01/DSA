#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

int largestSubarraySum(vector <int>arr)
{
    int n = arr.size();
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i ++)
    {
        int prefix = 0;
        for(int j = i; j < n; j ++)
        {
            prefix += arr[j];
            maxSum = max(maxSum, prefix);
        }
    }
    return maxSum;
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

    cout << largestSubarraySum(arr);
    return 0;
}