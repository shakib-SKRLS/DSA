#include <iostream>
#include <vector>
#include <map>
using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Precompute
//     int hash[101] = {0};

//     for (int i = 0; i < n; i++) {
//         hash[arr[i]]++;
//     }

//     int q;
//     cin >> q;

//     while (q--) {
//         int number;
//         cin >> number;

//         cout << hash[number] << endl;
//     }

//     return 0;
// }


// for char

// int main(){

//     string s;
//     cin>>s;

//     // precompute
//     int hash[256]={0};
//     for(int i=0; i<s.size(); i++){
//         hash[s[i]]++;
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;
//         // fetch
//         cout<<hash[c]<<endl;
//     }
//     return 0;
// }


// using map 
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // precompute
    map<int,int> map;
    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }

    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        cout<<map[number]<<endl;
    }
    



    return 0;

}