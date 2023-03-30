#include <iostream>
using namespace std;


int main ()
{
	// x = firstInt, y = secondInt
	int integers[2];
	
	//cout << "Input you integers \n";
	cin >> integers[0];
	cin >> integers[1];
	
	if(integers[0] == integers[1]){
		cout << integers[0] << " is equal to " << integers[1] << endl;
	}else if(integers[0] > integers[1]){
		cout << integers[0] << " is bigger than " << integers[1] << endl;
	}else{
		cout << integers[0] << " is smaller than " << integers[1] << endl;
	}
}