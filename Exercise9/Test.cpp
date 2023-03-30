#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number;
    vector<int> vec = {4,5,6,7,8,9};

    for(int i = 0; i < 5; i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;
}