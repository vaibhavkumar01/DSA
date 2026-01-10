#include<iostream>
using namespace std;
// Function to find minimum time taken to paint the wall
long long minTime(int A[], int N, int M)
{
    if(M > N)
    return -1;

    long long start = 0, end = 0, mid, ans;
    for(int i=0; i<N; i++)
    {
        // start = max(start,A[i]);
        // since we have used long long but int for A, N and M
        // so we have to use
        if(start < A[i])
        start = A[i];
        end += A[i];
    }

    while(start <= end)
    {
        mid = start + (end - start) / 2;

        // Wall length allocation to student
        long long wall_length = 0, Painter_count = 1;
        for(int i = 0; i < N; i ++)
        {
            wall_length += A[i];
            if(wall_length > mid)
            {
                Painter_count ++;
                wall_length = A[i];
            }
        }

        if(Painter_count <= M)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}

int main()
{
    int A[10000];
    int N, M;
    cout << "Enter the size of array: ";
    cin >> N;
    cout << "Enter the number of painters: ";
    cin >> M;
    cout << "Enter the elements of array: ";
    for(int i = 0; i < N; i ++)
    cin >> A[i];

    cout << "Minimized maximum time taken by each painter is: ";
    cout << minTime(A,N,M);

    return 0;
}