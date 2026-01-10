#include <iostream>
using namespace std;

int shipWithinDays(int weights[], int n, int days)
{
    int start = 0, end = 0, ans = 0;

    // Define search space
    for(int i = 0; i < n; i ++)
    {
        if (start < weights[i])
            start = weights[i]; // max weight
            end += weights[i];  // sum of weights
    }

    while (start <= end)
    {
        int capacity = start + (end - start) / 2;  //capacity = mid

        int currentWeight = 0;
        int dayCount = 1;

        // Check feasibility
        for (int i = 0; i < n; i++)
        {
            currentWeight += weights[i];

            if (currentWeight > capacity)
            {
                dayCount++;
                currentWeight = weights[i];
            }
        }

        if (dayCount <= days)
        {
            ans = capacity;
            end = capacity - 1;   // try smaller capacity
        }
        else
        {
            start = capacity + 1; // increase capacity
        }
    }

    return ans;
}

int main()
{
    int n, days;
    int weights[50000];

    cout << "Enter number of packages: ";
    cin >> n;

    cout << "Enter number of days: ";
    cin >> days;

    cout << "Enter package weights: ";
    for (int i = 0; i < n; i++)
        cin >> weights[i];

    cout << "Minimum ship capacity: ";
    cout << shipWithinDays(weights, n, days);

    return 0;
}