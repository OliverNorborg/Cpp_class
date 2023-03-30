#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    string command;
    int x;
    int array[1001] = {0};
    string output[1001];
    int counter = 0;
    cin >> command;

    while(command != "quit"){
        cin >> x;
        if(command == "add"){
            array[x-1]++;
        }
        if(command == "del"){
            array[x-1]--;
        }
        if(command == "qry"){
            if(array[x-1] > 0){
                output[counter] = {"T"};
                counter++;
            }else{
                output[counter] = {"F"};
                counter++;
            }
        }
        cin >> command; 
    }

    for(int i = 0; i < counter; i++){
            cout << output[i];
    }
    cout << endl;
}