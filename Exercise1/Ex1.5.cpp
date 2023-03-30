#include <iostream>
using namespace std;


int main ()
{
	int size;
	double numbers[size];
	double sum;
	
	//cout << "Please input how many numbers you would like to add as well as the numbers you would like to add togther \n";
	cin >> size;
	
	if(size < 1){
		cout << 0;
	}else{
		for(int x = 0; x < size; x++){
			cin >> numbers[x];
		}
		
		for(int i = 0; i < size; i++){
			sum+=numbers[i];
		}
		cout << sum << endl;
	}

}