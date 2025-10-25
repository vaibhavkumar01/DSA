#include<iostream>
#include<climits>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int rem, original = x;
        long long rev = 0;

        // negative integer cannot be palindrome
        if(x<0) 
            return false;
        if(x==0)
            return true;
        while(x>0){
            rem = x % 10;
            // check if rev would overflow
            if(rev > INT_MAX - rem/10) {
                return false;
            }
            rev = rev*10+rem;
            x /= 10;
        }
        return original == rev;
    }
};
int main()
{
    int x;
    cout << "Enter a Number: ";
    cin >> x;

    Solution obj;
    if (obj.isPalindrome(x))
        cout << x << " is a palindrome." << endl;
    else
        cout << x << " is not a palindrome." << endl;

    return 0;
}