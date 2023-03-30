#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

typedef vector<unsigned int> vec;

int main() {
    vec a_vec;
    vec b_vec;
    int a_value = 0;
    int b_value = 0;
    int cross = 0;
    char act;
    int arg;

    while(true){
        cin >> act;
        
        // We creat a 'false' by pressing Ctrl+D (in Linux)
        if (cin.fail()) {          

            auto i = a_vec.begin();
            auto j = b_vec.begin();

            while (true)
            {   
                if(i != a_vec.end()){
                    a_value = *i;
                    i++;
                }else{
                    a_value = 0;
                }

                if(j != b_vec.end()){
                    b_value = *j;
                    j++;
                }else{
                    b_value = 0;
                }
                
                cross = cross + (a_value * b_value);

                if(i == a_vec.end() && j == b_vec.end()){
                    break;
                }
            }

            cout <<cross << endl;
            return 0;
        }

        if ((act == 'a') ) {
            cin >> arg;
            a_vec.push_back(arg);
        }
        if ((act == 'b') ) {
            cin >> arg;
            b_vec.push_back(arg);
        }
    }
}

