#include <iostream>
#include <fstream>

using namespace std;

int main(){
	short int a = -6730;
	float b = 68.123;
	char c = 'J';

	ofstream file{"abc.txt"};
	
	if(file){
		cout << "Files created \n";
		file <<  a << endl << b << endl << c << endl;
		cout << "a = " << a << "b = " << b << "c = " << c; 
	}
	else
		cout << "Error opening file";

	
	cout << endl << endl;

	return 0;
}
