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


// Merge sort


void merge(vector<int>& arr, int left, int mid, int right){
    vector<int> temp;
    int i= left;
    int j=mid+1;

    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }

    }
     while (i <= mid)
        temp.push_back(arr[i++]);

    while (j <= right)
        temp.push_back(arr[j++]);

    // Copy back to original array
    for (int k = 0; k < temp.size(); k++)
        arr[left + k] = temp[k];

}





void mS(vector<int> & arr, int left, int right){
    if(left==right){
        return;
    }
    int mid = (left + right)/2;
    mS(arr, left, mid);
    mS(arr,mid+1,right);
    merge(arr, left, mid, right);
}


// quick sort

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i] <= pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}


void qs(vector<int> &arr, int low, int high){
    if(low<high){
        int pIndex= partition(arr, low, high);
        qs(arr, low, pIndex-1);
        qs(arr, pIndex+1, high);
}}

int main(){
   
     vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    qs(arr, 0, arr.size() - 1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}