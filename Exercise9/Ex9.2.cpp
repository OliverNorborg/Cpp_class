#include <iostream>
#include <vector>
using namespace std;


int fib(int x) {
   if((x==1)||(x==0)) {
      return(1);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}

int main() {
    int number;
    vector<int> list;

    while(true){
      cin >> number;

      //print when we are done
      //ctrl+d for linux
      if(cin.fail()){
         for(int i = 0; i < list.size(); i++) {
            cout << fib(list[i]) << " ";
            //cout << list[i] << " ";
         }
         cout << endl;
         return 0;
      }
      list.push_back(number);
   }
}