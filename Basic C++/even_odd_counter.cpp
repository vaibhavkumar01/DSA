#include<iostream>
using namespace std;
int main()
{
    int i,n,even,odd;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n<0){
        cout<<"Negative number"<<endl;
        return 0;
    }
    else if(n==0){
        cout<<"Zero"<<endl;
        return 0;
    }
    for(i=1;i<=n;i++){
        if(i%2==0){
            cout<< i << " is Even number"<< endl;
        }
        else cout << i << " is Odd number" << endl;
    }

    return 0;
}