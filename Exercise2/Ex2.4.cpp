#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int n;
    int count;
    int array[1001] = {0};
    count = 0;
    cin >> n;
    while(n > 0){
        cout << array[n-1] << endl;
        array[n-1]++;
        cin >> n;   
    }
}