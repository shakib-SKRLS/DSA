#include <iostream>
using namespace std;


// void print1(){
//     for(int i=1; i<6; i++){
//        for(int j=1; j<i+1; j++){
//            cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// void print2(int n){
//     for(int i=0; i<n; i++){
//         // space
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }
//         // numbers
//         for(int j=0; j<2*i+1; j++){
//             cout << "*";
//         }

//         // space
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
   
// }


void print3(int n){
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<i; j++){
            cout << " ";
        }
        // stars
        for(int j=0; j<2*n-(2*i+1); j++){
            cout << "*";
        }
         // space
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}


int main(){
    int n = 5;
    print3(n);

    return 0;
}