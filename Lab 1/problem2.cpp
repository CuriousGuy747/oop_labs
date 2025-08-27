//
// Created by Shahriddin Shamsiddinov on 27/08/25.

#include <iostream>;
#include <vector>;
using namespace std;


int main() {
    // task2
    int n;
    int max = 0;
    cin >> n;
    vector<int> v(n);
    for (int  i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << endl;
    for (int  i = 0; i < n; i++) {
        cout << v[i] << " ";

    }
    cout << endl;

    for (int  i = 0; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }

    cout << max << endl;
}

