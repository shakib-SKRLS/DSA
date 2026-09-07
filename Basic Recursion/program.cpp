#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

// Check if the given string is a palindrome
bool isPalindrome(string& s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i++] != s[j--]) 
            return false;
    }
    return true;
}

int main(){
    string s= "run";
    bool decision= isPalindrome(s);
    if(decision == true){
        cout<<"its a palindrome";
    }else{
        cout<<"its not a palindrome";
    }
}