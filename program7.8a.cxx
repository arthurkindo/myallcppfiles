#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	// i data type for 
	int i=0;
	// an array to stor 70 character
	char ch[70];
	// opening a file to read it
	ifstream roy;
	roy.open("data.txt", ios::in);
	
	// creating a new file to store char
	ofstream boy("newData.txt", ios::out | ios::app);
	
	//using loop
	while(roy)
	{
		roy.get(ch, 70, '.');
		boy<<i+1<<". "<<ch<<endl;
		i++;
	}
	
	boy.close();
	roy.close();
	return 0;
}











