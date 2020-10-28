#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ofstream roy;
	roy.open("cppChapter7a.txt");
	string name = "hay this is written by using obj methot\ni hope that it is working well and fine.you will know all this after you get this all thing are good and fine.";
	for(int i=0; i<strlen(name); i++)
	{
		roy.put(name[i]);
	}
	roy.close();
	return 0;
}