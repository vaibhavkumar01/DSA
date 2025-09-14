#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,k;
    cout << "Enter a number: ";
    cin >> n;
    if(n<0){
        cout<<"Negative number";
    }
    else{
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0){
                k=1;
                break;
            }
        }
    }
    if(k==1){
        cout << "Not Prime";
    }
    else cout << "Prime";
    return 0;
}