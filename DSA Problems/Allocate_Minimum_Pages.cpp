#include<iostream>
using namespace std;
// Function to find minimum number of pages.
int findPages(int A[], int N, int M)
{
    if(M > N)
    return -1;

    int start = 0, end = 0, mid, ans;
    for(int i=0; i<N; i++)
    {
        start = max(start,A[i]);
        end += A[i];
    }

    while(start <= end)
    {
        mid = start + (end - start) / 2;

        // Page allocation to student
        int pages = 0, Student_count = 1;
        for(int i = 0; i < N; i ++)
        {
            pages += A[i];
            if(pages > mid)
            {
                Student_count ++;
                pages = A[i];
            }
        }

        if(Student_count <= M)
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
    cout << "Enter the number of students: ";
    cin >> M;
    cout << "Enter the elements of array: ";
    for(int i = 0; i < N; i ++)
    cin >> A[i];

    cout << "Minimized maximum number of pages assigned to any student is: ";
    cout << findPages(A,N,M);

    return 0;
}