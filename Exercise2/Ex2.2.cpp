#include <iostream>
#include <math.h>
using namespace std;



int main ()
{
	int n;
	cin >> n;
	int y = n;
	if(n > 1){
		for(int i = 2; i <= y; i = i+1){
			// we then check for reminders with the division
			// if there are non we print the i and divide by it
			while(n % i == 0){
				n = n/i;
				//cout << n;
				cout << i;
				
				if(n != 1){
					cout  << " * ";
				}
			}
		}
		cout << endl; 
	}else{
		cout << "0" << endl;
	}
	
}