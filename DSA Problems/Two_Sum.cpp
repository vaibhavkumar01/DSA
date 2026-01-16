#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        vector<int> ans;
        
        int start = 0, end = numbers.size() - 1;

        while(start < end)
        {
            if(numbers[start] + numbers[end] == target)
            {
                ans.push_back(start + 1);
                ans.push_back(end + 1);
                return ans;
            }
            else if(numbers[start] + numbers[end] < target)
                start ++;
            else
                end --;
        }
        return ans;
    }
};

int main()
{
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter your array elements: ";
    
    vector<int> numbers(n);
    for(int i = 0; i < n; i ++)
    {
    cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());
    
    cout << "Your Sorted Array: ";
        for(int i = 0; i < n; i ++)
        {
        cout << numbers[i] << " ";
        }

    cout << endl << "Enter the target value: ";
    cin >> target;

    Solution obj;
    vector<int> ans = obj.twoSum(numbers, target);
    // Printing output in vector
    for (int i : ans)
        cout << i << " ";

}