#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	// name 
	string name;
	// rollno
	int rollno;
	// size will stor the no total no of student 
	int size;
	cout<<"Enter the total no of std : ";
	cin>>size;
	// creating file object
	
	ofstream coco;
	// creating a new file reo
	coco.open("reo.txt",ios::out);
	// taking input and entering them in the file
	for(int i=0; i<size; i++)
	{
		cout<<"Enter student name: ";
		cin>>name;
		cout<<"Enter student rollno: ";
		cin>>rollno;
		coco<<"Name: "<<name<<endl
		<<"Roll no : "<<rollno<<endl
		<<"***********************"<<endl;
	}
	coco.close();
	
	return 0;
}








