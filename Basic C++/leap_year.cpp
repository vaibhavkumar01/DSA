#include<iostream>
using namespace std;

class Solution {
public:
    int isLeap(int Year){

        if(Year%400==0)
            return 1;
        else if(Year%4==0 && Year%100!=0)
            return 1;
        else 
            return 0;
    }
};

int main(){
    int Year;

    cout << "Enter a Year: ";
    cin >> Year;       // user input

    Solution s;
    cout << "{Leap Year = 1}\n{Not Leap Year = 0}\nAnswer is: " << s.isLeap(Year) << endl;

    return 0;
}