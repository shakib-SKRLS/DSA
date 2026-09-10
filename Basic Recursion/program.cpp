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


// reverse an array
void reverseArray(int arr[], int left, int right) {
   
    if (left >= right) {
        return;
    }

   
    swap(arr[left], arr[right]);

    
    reverseArray(arr, left + 1, right - 1);
}

// reverse an array with single pointer
// void reverseArray(int arr[], int i, int n) {
//     // Base case
//     if (i >= n / 2) {
//         return;
//     }

//     swap(arr[i], arr[n - i - 1]);

//     reverseArray(arr, i + 1, n);
// }


// check if the string is palindrome or not
// bool isPalindrome(string str, int left, int right) {

//     // Base case
//     if (left >= right) {
//         return true;
//     }

//     // Characters don't match
//     if (str[left] != str[right]) {
//         return false;
//     }

//     // Move both pointers
//     return isPalindrome(str, left + 1, right - 1);
// }


// febonaci

int f(int n){
    if(n<=1) return n;
    int last=f(n-1);
    int slast=f(n-2);
    return last + slast;
}


int main(){
    
    // int mul = f(5);
    // cout<<mul;
    // return 0;

    //  int arr[] = {1, 2, 3, 4, 5};
    // int n = 5;

    // reverseArray(arr, 0, n - 1);

    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    int num=f(7);
    cout<<num;
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