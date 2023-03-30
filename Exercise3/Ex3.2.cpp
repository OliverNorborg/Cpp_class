#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int l;
    int n;
    int data;
    int m = 0;
     
    cin >> l;
    cin >> n;

    int array[n] = {0};
    
    //inputs the data in an array
    for(int i = 0; i < n; i++){
        cin >> data;
        array[i] = {data};
    }
    for(int i = 0; i < n; i++){
        //Finds the max value of the input numbers 
        if(array[i] > m){
            m = array[i];
        }
    }

    int k;
    double m1 = m;
    k = ceil(m1/l);
    int histo[m+1] = {0};

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= l; j++){
            if(array[i] >= (j-1)*k && array[i] < j*k){
                histo[(j-1)*k]++; 
            }
        }
    }
    
    if(m % l == 0){
        histo[(l-1)*k]++;
    }

    //Prints the histogram
    for(int j = 0; j < l; j++){
        cout << j*k << ": " << histo[j*k] << endl;
    }

}