#include <iostream>
#include <math.h>
using namespace std;


int main ()
{
	
	double numbers[3];
	double sum;
	
	//cout << "Input 3 numbers \n";
	for(int x = 0; x < 3; x++){
		cin >> numbers[x];
	}
	
	sum = (numbers[0] + numbers[1]) - numbers[2];
	//cout << "The result of (x + y) - z is: \n" << sum;
	cout << sum << endl;
}