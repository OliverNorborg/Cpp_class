#include <iostream>
#include <vector>
using namespace std;


bool isPal(vector<int> &vec, int first, int last){
    //cout << "(" << first << "," << last << ")" << endl;
    if (first >= last)   
        return true;
    if (vec[first] != vec[last])
        return false;

    return isPal(vec, ++first, --last);   
}


int main() {
    int number;
    vector<int> vec;

    while(true){
      cin >> number;

      //print when we are done
      //ctrl+d for linux
      if(cin.fail()){
         if(isPal(vec,0,vec.size()-1)){
             cout << "yes";
         }else{
             cout << "no";
         }
         cout << endl;
         return 0;
      }
      vec.push_back(number);
   }
}
