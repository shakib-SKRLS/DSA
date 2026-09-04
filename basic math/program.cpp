#include <iostream>
using namespace std;

void extractionOfDigits(int n){
    while(n>0){
        int lastDigit= n%10;
        cout<<lastDigit;
        n=n/10;
    }
}

// LEETCODE QUESTION 7. Reverse Integer

// class Solution {
// public:
//     int reverse(int x) {
//         int n=x;
//         int ans=0;
//         while(n!=0){
//             if(ans>INT_MAX/10 || n<INT_MIN/10) return 0;
//             ans=ans*10+n%10;
//             n=n/10;
//         }
//         return ans;
//     }
// };


// Leetcode 9. Palindrome Number

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x<0){
//             return false;
//         }
//         long rev=0;
//         int original=x;
//         while(x!=0){
//             int d=x%10;
//             rev= (rev*10)+d;
//             x=x/10;
//         }
//         if(rev==original){
//             return true;
//         }else{
//             return false;
//         }
//     }
// };

int main(){
   int n;
   cin>>n;
   extractionOfDigits(n);
}