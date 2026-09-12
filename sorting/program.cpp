#include <iostream>
#include <vector>
using namespace std;



// selection sort 
// int main() {

//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Selection Sort
//     for (int i = 0; i < n - 1; i++) {

//         int minIndex = i;

//         for (int j = i + 1; j < n; j++) {

//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }

//         swap(arr[i], arr[minIndex]);
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// Bubble sort
// void bubble_sort(vector<int>& arr, int n){
//     for(int i =n-1; i>=0; i--){
//         int didSwap=0;
//         for(int j=0; j<=i-1; j++){
//             if(arr[j]> arr[j+1]){
//                 int temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//                 didSwap=1;
//             }
//         }
//         if(didSwap==0){
//             break;
//         }
//     }
    
// }

// Insertion sort
void insertion_sort(vector<int>& arr, int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;

            j--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // bubble_sort(arr, n);
    insertion_sort(arr, n);
    for(auto it: arr){
        cout<< it <<" ";
    }
}