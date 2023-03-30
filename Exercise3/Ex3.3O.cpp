#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double u[n] = {0};
    double data_u;
    double v[n] = {0};
    double data_v;
    double product = 0;

    for(int i = 0; i < n; i++){
        cin >> data_u;
        u[i] = {data_u};
    }

    for(int i = 0; i < n; i++){
        cin >> data_v;
        v[i] = {data_v};
    }
    for(int i = 0; i < n; i++){
        product = product + (u[i]*v[i]);
    }
    cout << product << endl;

}