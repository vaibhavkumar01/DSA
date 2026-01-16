#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Function to find the Pair with given Difference
    // Output Format:- Return 1 if such pair exist return 0 if not.
    bool givenDifferencePair(vector<int>& numbers , int target)
    {
        sort(numbers.begin(),numbers.end());
        int start = 0, end = 1, n = numbers.size();

        if(target < 0)
        target = target * 1;

        while(end < n)
        {
            // difference is equal to target
            if(numbers[end] - numbers[start] == target)
            return 1;
            // difference is greater than target
            else if(numbers[end] - numbers[start] < target)
            end ++;
            // difference is less than target
            else
            start ++;

            if(start == end)
            end ++;
        }
        return 0;
    };

int main()
{
    int n, target;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int>numbers(n);
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i ++)
    cin >> numbers[i];
    cout << "Enter the target: ";
    cin >> target;

    cout << givenDifferencePair(numbers, target);
    return 0;
}