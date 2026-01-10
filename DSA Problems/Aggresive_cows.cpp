#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:

    // function to assign stalls to k cows
    int assignStalls(int n, int k, vector<int> &stalls){

        int start = 1, end, mid, ans;
        // sort them in increasing
        sort(stalls.begin(),stalls.end());

        end = stalls[n-1] - stalls[0];

        while(start <= end)
        {
            mid = start + (end - start) / 2;
            int count = 1, pos = stalls[0];
            for(int i = 1; i < n; i++)
            {
                if(pos + mid <= stalls[i])
                {
                    count ++;
                    pos = stalls[i];
                }
            }

            if(count < k)
            {
                end = mid - 1;
            }
            else
            {
                ans = mid;
                start = mid + 1;
            }
        }

        return ans;
    }
};

int main()
{
    int n,k;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the number of Cows: ";
    cin >> k;

    cout << "Enter Stalls number as an array: ";
    vector<int> stalls(n);
    for(int i = 0; i < n; i ++)
    {
        cin >> stalls[i];
    }

    Solution obj;
    cout << "Maximum minimum distance between any two stalls = " << obj.assignStalls(n, k, stalls) << endl;

    return 0;
}