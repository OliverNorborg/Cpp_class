#include <iostream>
#include <math.h>
using namespace std;

int arraySortedOrNot(int arr[], int n)
{
    // Array has one or no element or the
    // rest are already checked and approved.
    if (n == 1 || n == 0)
        return 1;
 
    // Unsorted pair found (Equal values allowed)
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
    // Last pair was sorted
    // Keep on checking
    return arraySortedOrNot(arr, n - 1);
}

int main ()
{
    int n;
    cin >> n;
    int array[n] = {0};
    int data;

    for(int i = 0; i < n; i++){
        cin >> data;
        array[i] = {data};
    }

    if(arraySortedOrNot(array,n)){
        cout << "SORTED" << endl;
    } else{
        cout << "UNSORTED" << endl;
    }

}