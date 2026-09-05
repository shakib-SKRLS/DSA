#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

void extractionOfDigits(int n)
{
    while (n > 0)
    {
        int lastDigit = n % 10;
        cout << lastDigit;
        n = n / 10;
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

// armstrong number

// void armstrongNum(int n){
//     int sum =0;
//     int original=n;
//     while(n>0){
//         int lastDigit =  n%10;
//         // cout<<lastDigit;
//         sum=sum+(lastDigit*lastDigit*lastDigit);

//         n=n/10;
//     }
//     if(sum==original){
//         cout<<"Armstrong Number";
//     }else{
//         cout<<"Not an Armstrong Number";
//     }
// }

// Print all divisors-
// bruteforce approcah

// void printAllDivisors(int n){
//     int original =n;
//     for(int i=1; i<=original; i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }

//     }
// }

// better approach
//  void printAllDivisors(int n){
//      vector<int> ls;
//      for(int i=1; i*i<=n; i++){
//          if(n%i==0){
//              ls.push_back(i);
//              if(n/i != i){
//                  ls.push_back(n/i);
//              }
//          }
//      }
//      sort(ls.begin(), ls.end());
//      for(auto it: ls) cout <<it<<" ";
//  }

// Prime number
// void primeNum(int n){
//     int cnt=0;
//    for(int i=1; i*i<=n; i++) {
//         if(n%i==0){
//             cnt++;
//             if(n/i !=i){
//                 cnt++;
//             }
//         }
//    }
//    if(cnt==2){
//     cout<<"its a prime number";
//    }else{
//     cout<<"its not a prime number";
//    }
// }

// GCD
// void gcd(int n, int m)
// {
//     int highest = 0;
//     int l = 0;
//     if (n < m)
//     {
//         l = n;
//     }
//     else
//     {
//         l = m;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0 && m % i == 0)
//         {

//             highest = i;
//         }
//     }
//     cout << highest;
// }

// better approch
// void gcd(int n, int m)
// {
//     int highest = 0;
//     int l = 0;
//     if (n < m)
//     {
//         l = n;
//     }
//     else
//     {
//         l = m;
//     }

//     for (int i = l; i >=1; i--)
//     {
//         if (n % i == 0 && m % i == 0)
//         {

//             highest = i;
//             break;
//         }
//     }
//     cout << highest;
// }

// for even better approch we can use equilateral algorithm which says that 
// gcd(a,b) =gcd(a-b,b) where a>b;

// void gcd(int a, int b){
//     while(a>0 && b>0){
//         if(a>b) a=a%b;
//         else b=b%a;
//     }
//     if(a==0) cout << b;
//     else cout<< a;
// }

int main()
{
    int n = 10;
    int m = 30;
    //    cin>>n;
    //    armstrongNum(n);
    // printAllDivisors(n);
    // gcd(n, m);
}