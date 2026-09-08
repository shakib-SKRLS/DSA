#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;



// print n times
// void printNtimes(int i, int n){
//     if(i>n){
//         return;
//     }
//     cout<<"hello world"<<endl;
//     printNtimes(i+1, n);
// }



// print from 1 to n using backtracking

// void printNtimes(int i, int n){
//  if (i < 1) {
//         return;
//     }

//     printNtimes(i-1, n);  // recursive call first

//     cout << i << " "; // prints during backtracking
// }


// sum of first n numbers
// void f(int i, int sum){
//     if(i<1){
//         cout<<sum;
//         return;
//     }
//     f(i-1, sum+i);
// }

// multiplication of first n numbers

// int f(int n){
//     if(n==1){
//         return 1;
//     }
//     return n * f(n-1);
// }


int main(){
    
    // int mul = f(5);
    // cout<<mul;
    return 0;
}





// Check if the given string is a palindrome
// bool isPalindrome(string& s) {
//     int i = 0, j = s.size() - 1;
//     while (i < j) {
//         if (s[i++] != s[j--]) 
//             return false;
//     }
//     return true;
// }

// int main(){
//     string s= "run";
//     bool decision= isPalindrome(s);
//     if(decision == true){
//         cout<<"its a palindrome";
//     }else{
//         cout<<"its not a palindrome";
//     }
// }