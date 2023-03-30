#include <iostream>
using namespace std;


int main ()
{
	int n;
	int sum;
	sum = 0;
	cin >> n;
	
	if(n > 0){
		for(int i = 0; i <= n; i++){
			sum = sum+i;
		}
		cout << sum << endl;
	}else{
		cout << 0 << endl;
	}
}