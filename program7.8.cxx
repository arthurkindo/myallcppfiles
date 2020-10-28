#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string p = "The default behaviour of ifstream type stream (upon opening file) allows user to read contents from the file. if the file mode is ios::in only then reading is perform on a text file and if the file mode also includes ios::binary along with ios::in then, reading is performed in binary mode. No transformation of character take place in text mode.";
	// create a file;
	ofstream roy;
	roy.open("data.txt", ios::out);
	roy<<p;
	roy.close();
	
	return 0;
}


