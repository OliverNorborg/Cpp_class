#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n] = {0};
    int data;

    for(int i = 0; i < n; i++){
        cin >> data;
        array[i] = {data};
    }

    int max = 0;
    for(int i = 0; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    //cout << max << endl;

    int counter = 0;

    for(int i = 0; i < n; i++){
        if(array[i] == max){
            if(counter == 0){
                cout << "*" << array[i] << "* ";
                counter = 1;
            }
            else if(counter == 1){
                cout << array[i] << " ";
            }
        }else{
            cout << array[i] << " ";
        }
    }
    //}else{
    //  cout << endl;
}