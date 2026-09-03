#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

// Comparator function
bool comp(pair<int, int> a, pair<int, int> b) {

    // Sort by second element in ascending order
    if (a.second < b.second)
        return true;

    if (a.second > b.second)
        return false;

    // If second elements are equal,
    // sort first element in descending order
    if (a.first > b.first)
        return true;

    return false;
}

int main() {

    int x, y;
    cin >> x >> y;

    int d[5];

    for (int i = 0; i < 5; i++) {
        cin >> d[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << d[i] << endl;
    }

    pair<int, int> p[] = {
        {1, 2},
        {2, 1},
        {4, 1}
    };

    sort(p, p + 3, comp);

    cout << "\nSorted pairs:\n";

    for (int i = 0; i < 3; i++) {
        cout << p[i].first << " " << p[i].second << endl;
    }

    cout << "\nYou entered: " << x << " and " << y << endl;

    return 0;
}