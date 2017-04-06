#include <iostream>
#include <fstream>

using namespace std;

int main(){
	short a = -6730;
	float b = 68.123;
	char c = 'J';

	ofstream file{"abc.bin", ios::binary};

	if(file){
		cout << "File Created" << endl;
		
		file.write(reinterpret_cast<char*>(&a), sizeof(a));
		file.write(reinterpret_cast<char*>(&b), sizeof(b));
		file.write(reinterpret_cast<char*>(&c), sizeof(c));
	}
	else
		cout << "Error opening file" << endl;
}
