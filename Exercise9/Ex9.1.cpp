#include <iostream>
#include <vector>
using namespace std;


void ReverseArray(vector<int> &vec, int i, int j){
    int temp;
    
    if(i>=j)
        return;
    
    temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
    ReverseArray(vec, i+1, j-1);
    
}


int main() {
    int number;
    vector<int> vec;

    while(true){
    cin >> number;

    //print when we are done
    //ctrl+d for linux
    if(cin.fail()){
        ReverseArray(vec, 0, vec.size()-1);
        for(int i = 0; i < vec.size(); i++){
            cout << vec[i] << " ";
        }
        cout << endl;
        return 0;
    }
    vec.push_back(number);
   }
}
