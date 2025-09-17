#include<iostream>
using namespace std;
int main()
{
    int i,n,next,prev=0,curr=1;
    cout << "Enter a Number: ";
    cin >> n;
    for(i=1;i<=n;i++){
        cout << prev << " ";
        next=prev+curr;
        prev=curr;
        curr = next;
    }
    return 0;
}