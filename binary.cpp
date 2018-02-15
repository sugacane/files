#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
	ofstream myfile ("abc.bin", ios::binary);
	if (myfile) {
		myfile.write(reinterpret_cast <char*>(&a),sizeof(a));
		myfile.write(reinterpret_cast <char*>(&b),sizeof(b));
		myfile.write(reinterpret_cast <char*>(&c),sizeof(c));
	} else {
		cout << "Oh no u have an error";
	}
	myfile.close();
   return 0;
}
