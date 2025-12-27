#include<iostream>
#include<climits>
using namespace std;
class Solution{
public:
    // Function returns the second largest elements

    int print2largest(int arr[], int n) {
        // code part

        // largest element

        int ans = -1;
        
        for(int i=0; i<n; i++){
            if(arr[i]>ans)
            ans = arr[i];
        }

        // Second largest

        int second = -1;
        for(int i=0; i<n; i++){
            if(arr[i]!=ans)
            second = max(second,arr[i]);
        }

        // When all are same
        if(second == INT_MIN)
            return -1;

        return second;
    }
};
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter "<< n << " elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Solution obj;
    int result = obj.print2largest(arr,n);
    cout << "Second largest element: " << result << endl;
    return 0;
}