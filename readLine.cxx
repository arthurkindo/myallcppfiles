#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
					// count variables
	int lines = 0;
	int words = 0;
	int alpha = 0;
	
	ifstream file;
	file.open("mysadfile.txt", ios::in);
	while(file.eof() == 0)
	{
		file.get(ch);
		alpha++;
		if(ch == ' '){
			words++;
		}
		if(ch == '.'){
			lines++;
		}
	}
	file.close();
					// final output of the program
	cout<<"No of lines in the file : "<<lines<<endl
	<<"No of words in the file : "<<words<<endl
	<<"No of char in the file : "<<alpha<<endl;	
	return 0;
}








