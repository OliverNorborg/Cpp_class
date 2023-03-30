#include <iostream>
using namespace std;

void printArray(int n, int array[]){
    cout << "The array contains: ";

    for(int i = 0; i < n; i = i +1){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int aGiven[] = {1, 2, 3};
    printArray(3, aGiven);

    int aLengthComp[3]; //Uninitialised
    cout << "Please enter the 3 array values: ";

    for(int i = 0; i < 3; i = i + 1){
       cin >> aLengthComp[i];
    }
    printArray(3, aLengthComp);

    cout << "Please enter array size: ";
    int n;
    cin >> n;

    //This is not standard for C++!
    //int aLengthRun[n];

    int *aLengthRun; // A pointer to an integer 
    aLengthRun = new int[n];

    cout << "Please insert " << n << " values ";

    for(int i = 0; i < n; i = i + 1){
        cin >> aLengthRun[i];
    }

    printArray(n, aLengthRun);

    delete[] aLengthRun;

    return 0;
}