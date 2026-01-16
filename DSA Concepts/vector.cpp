#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // create vector, declare
    vector<int>v;
    vector<int>v1(5,1);
    // size and capacity
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;
    // Update value
    v[1] = 5;
    cout << "Size of v1: " << v1.size() << endl;
    cout << "Capacity of v1: " << v1.capacity() << endl;
    v1.push_back(8);
    cout << "Size of v1: " << v1.size() << endl;
    cout << "Capacity of v1: " << v1.capacity() << endl;
    
    // Delete value from vector
    vector<int> vnew;
    vnew.push_back(5);
    vnew.push_back(32);
    vnew.push_back(61);
    vnew.push_back(55);
    vnew.push_back(75);
    vnew.pop_back();
    cout << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity of vnew: " << vnew.capacity() << endl;
    // Remove from random position
    vnew.erase(vnew.begin() + 1);
    cout << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity of vnew: " << vnew.capacity() << endl;
        for(int i = 0; i < vnew.size(); i ++)
        cout << vnew[i] << " ";
        vnew.insert(vnew.begin() + 1, 50); // insert value
        cout << endl;

        for(int i = 0; i << vnew.size(); i++)
        cout << vnew[i] << " ";

        vnew[1] = 37;
        for(int i = 0; i < vnew.size(); i ++)
        cout << vnew[i] << " ";
    
    vnew.clear(); // Remove all the element
    cout << endl << "Size of vnew: " << vnew.size() << endl;
    cout << "Capacity of vnew: " << vnew.capacity() << endl;
    
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(32);
    arr.push_back(61);
    arr.push_back(55);
    arr.push_back(75);

    // sort in increasing order
    sort(arr.begin(),arr.end());
    for(int i = 0; i < arr.size(); i ++)
    cout << arr[i] << " ";
    cout << endl;
    // sort in decreasing order
    sort(arr.begin(),arr.end(), greater<int>());
    for(int i = 0; i < arr.size(); i ++)
    cout << arr[i] << " ";
    cout << endl << "Size of arr: " << arr.size() << endl;
    cout << "Capacity of arr: " << arr.capacity() << endl;
}