#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ifstream roy;
	roy.open("charInfo.txt", ios::in);
	while(roy.eof() == 0)
	{
		roy.get(ch);
		roy.put(ch);
	}
	roy.close();
	return 0;
}