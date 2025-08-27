//
// Created by Shahriddin Shamsiddinov on 27/08/25.
//
#include <iostream>;
#include <string>;
#include <vector>;
using namespace std;

int main(){
    // cout << "Hello world" << endl;
    // // for(int i = 1; i < 10; i++){
    // //     cout << i << endl;
    // // }
    //
    // task1
    int number;
    int sum = 0;
    cout << "Input number: ";
    cin >> number;
    cout << endl;
    
    while (number > 0) {
        int r = number % 10;
        number = number / 10;
        sum += r;
    }
    cout << sum << endl;



}
