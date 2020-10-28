#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	char myline[75];
	int cl = 0;
	ofstream outfile("newData.txt", ios::app);
	ifstream infile("data.txt", ios::in);
	if(! infile){
		cerr<<"Failed to open the file.\n";
		return 1;
	}
	while(1){
		infile.getline(myline, 75, '.');
		if(infile.eof())break;
		cl++;
		outfile<<cl<<". "<<myline<<endl;
	}
	infile.close();
	outfile.close();
	cout<<"Output "<<cl<<"records"<<endl;
	return 0;
}




