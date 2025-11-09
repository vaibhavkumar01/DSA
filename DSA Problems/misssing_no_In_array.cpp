#include<iostream>
using namespace std;
class Solution{
public:
// Function to find out missing no. of an array
    int missingNumber(int arr[], int n){
        // Sum of all elements in an array
        long long sum = 0;
        for(int i=0; i<n; i++)
        sum += arr[i];
        
        // Sum of number
        long long ans = (n+1)*(n+2)/2;
        return ans - sum;
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
    int result = obj.missingNumber(arr,n);
    cout << "Missing Number is: " << result << endl;
    return 0;
}