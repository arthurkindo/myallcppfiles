#include<iostream>
#include<map>
using namespace std;
int main()
{
	// datatypes
	int mark;
	string name;
	int size;
	cout<<"Enter the total no of student : ";
	cin>>size;
	
	map <string, float> sms;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter your name : ";
		cin>>name;
		cout<<"Enter your Average Mark : ";
		cin>>mark;
		sms[name] = mark;
	}
	while(cin>>name)
	{
		if(sms[name] != 0)
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Marks : "<<sms[name]<<endl;			
		}
		else
		{
			cout<<"Name not found : "<<name<<endl;
		}
	}
	return 0;
}





