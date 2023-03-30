#include <iostream>
#include <math.h>
using namespace std;


int main ()
{
	int terms;
	double piApprox;
	piApprox = 0;
	
	cin >> terms;
	
	if(terms > 0){
		for(int i=0; i < terms; i ++){
			piApprox += pow(-1, i)/((2.0*i)+1);
		} 
		cout << 4 * piApprox << endl;
	}else{
		cout << 0 << endl;
	}
}