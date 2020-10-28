#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream roy("cppChapter7a.txt");
	roy<<"hay this is written by using obj method"<<endl
	<<"i hope that it is working well and fine."<<endl
	<<"you will know all this after you get this all "<<endl
	<<"thing are good and fine."<<endl;
	roy.close();
	return 0;
}