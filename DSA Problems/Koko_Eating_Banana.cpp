#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long total_time = 0;

            for (int bananas : piles) {
                // ceil(bananas / mid)
                total_time += (bananas + mid - 1) / mid;
            }

            if (total_time <= h) {
                ans = mid;        // valid speed
                high = mid - 1;   // try slower
            } else {
                low = mid + 1;    // need faster speed
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    cout << "Minimum Eating Speed: "
         << sol.minEatingSpeed(piles, h) << endl;

    return 0;
}