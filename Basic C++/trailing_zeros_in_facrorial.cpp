#include<iostream>
using namespace std;

int trailingZeroes(int N)
{
    int count = 0;
    while(N >= 5){
        count += N/5;
        N /= 5;
    }
    return count;
}

int main ()
{
    int N;
    cout << "Enter a factorial: ";
    cin >> N;
    
    cout << trailingZeroes(N) << endl;
    return 0;
}