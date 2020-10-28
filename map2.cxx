#include<iostream>
#include<map>
using namespace std;
int main()
{
				// making data types
	int mark;
	string name;
				// takeing the total size of file
	int size;
	cout<<"Enter the total no of student  : ";
	cin>>size;
			// creating a map 
	map <string, int> sms;
			// taking input from user 
	for(int i=0; i<size; i++)
	{
		cout<<"Enter student name : ";
		cin>>name;
		cout<<"Enter student mark : ";
		cin>>mark;
		sms[name] = mark;
	}
				// main menu making process
	cout<<"\n\n";
	cout<<"\t\tMain Menu"<<endl;
	cout<<"\t\t1.Search for a student.\n";
	cout<<"\t\t2.Get the size of file.\n";
	cout<<"\t\t3.Insert a new student.\n";
	cout<<"\t\t4.Delete file information.\n";
	cout<<"\t\t5.Exit\n";
			// taking the choise from user
	char choise;
	cout<<"\tEnter your choise(1-5) : ";
	cin>>choise;
	switch(choise)
	{
		case '1': string n;
						cout<<"Enter the name : ";
						cin>>n;
						cout<<"\n\tName : "<<n<<"\n"
						<<"\tMarks : "<<sms[n]<<endl;
						break;
	}	
			
	return 0;
}











