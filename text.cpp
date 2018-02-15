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
 
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

	ofstream myfile;
	myfile.open ("abc.txt");
	if (myfile) {
		myfile << a<<" "<<b<<" "<<c;
	} else {
		cout << "Oh no u have an error";
	}
	myfile.close();
   return 0;
}
