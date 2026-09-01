#include <iostream>
using namespace std;

int main() {
    int a, y;
    cin>> a >> y;
    int d[5];

    for(int i=0; i<5; i++){
        cin>> d[i];
    }
    for(int i=0; i<5; i++){
        cout<< d[i] << endl;
    }

    cout << "Hello, World!" << endl;
    cout << "You entered: " << a << " and " << y << endl;
    return 0;
}