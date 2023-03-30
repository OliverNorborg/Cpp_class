#include <iostream>
#include <string>
#include <stdlib.h>     /* Library containing functions such as
                           rand (a generator of random numbers) */
using namespace std;

int main(){
    int m, n;
    cin >> n; //rows 
    cin >> m; // columns 

    int x, y;
    x = m/2;
    y = n/2;

    cout << "x: " << x << " y: " << y << endl;
    
    if(x <= 1){
        x = 2;
    }
    if(y <= 1){
        y = 2;
    }

    cout << "x: " << x << " y: " << y << endl;

}