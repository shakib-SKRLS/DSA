#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Find the largest integer in the array
// Brute force approach -- O(n log n)

int largest(vector<int>& arr) {
    sort(arr.begin(), arr.end());

    return arr[arr.size() - 1];
}

// optimal O(n)

int largestO(vector<int>& arr){
    int max = arr[0];
    for(int i= 1; i<arr.size(); i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}



// second largest
// bruteforce approch O(nlogn)
int secondLargest(vector<int>& arr) {

    sort(arr.begin(), arr.end());

    int largest = arr[arr.size() - 1];

    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            return arr[i];
        }
    }

    return -1;
}


// optimal O(n)
int secondLargestO(vector<int> & arr){
    int largest = arr[0];
    int secondlargestnum = -1;
    for(int i=1; i<arr.size(); i++){
        if(arr[i]>largest){
            secondlargestnum=largest;
            largest=arr[i];
        }else if(arr[i]>secondlargestnum && arr[i] != largest){
            secondlargestnum=arr[i];
        }
    }
    return secondlargestnum;
}


int main() {

    vector<int> arr = {4, 5, 2, 1, 6};

    int slarge = secondLargestO(arr);

    cout << slarge;

    return 0;
}