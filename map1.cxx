#include<iostream>
#include<map>
using namespace std;
int main()
{
	string name;
	int marks;
	int size;
	cout<<"Enter the total no of student: ";
	cin>>size;

	map <string, int> sms;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter student name : ";
		cin>>name;
		cout<<"Enter student marks : ";
		cin>>marks;
		sms[name] = marks;
	}
	char ch = 'y';
	while(ch=='y')
	{
		string n;
		cout<<"Enter the name of student : ";
		cin>>n;
		cout<<"Name : "<<n<<endl;
		cout<<"Mark : "<<sms[n]<<endl;
		cout<<"\n\nDo you want to run again(y/n) : ";
		cin>>ch;
	}
	return 0;
}


