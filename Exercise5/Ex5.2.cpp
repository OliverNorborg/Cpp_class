#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

typedef vector<unsigned int> vec;

// Declaring the functions written since they are after the main
void display(const vec &b); // Display the content of a bag (used read-only)


int main() {
    vec a_vec;
    vec b_vec;
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
                    cout << *i << " ";
                    i++;
                }
                if(j != b_vec.end()){
                    cout << *j << " ";
                    j++;
                }
                if(i == a_vec.end() && j == b_vec.end()){
                    break;
                }
            }

            cout << endl;
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

void display(const vec &b) {
    for (auto e : b) {
        cout << e << " ";
    }
}
