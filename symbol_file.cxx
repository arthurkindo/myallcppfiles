#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	 		// creating a file and storing the symboles in it
	ofstream roy;
	roy.open("symbol.txt", ios::out);
	for(int i=33; i<=104; i++)
	{
		roy<<i<<" = "<<(char)(i)<<endl;
	}
	roy.close();
			// reading the file symbol
	ifstream boy("symbol.txt", ios::in);
	while(boy.eof() == 0)
	{
		char ch;
		put(boy, ch);
		cout<<ch;
	}
	
	return 0;
}





