#include<iostream>
#include<fstream>
using namespace std;
class student
{
	string name;
	int rollno;
	int eng, com, maths, sci;
	float avg;
	public:
		void getInfo(void);
		string stdName(void){return name;}
		int stdRollno(void){return rollno;}
		float stdAverage(void){return avg;}
};
void student :: getInfo()
{
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter rollon : ";
	cin>>rollno;
	cout<<"Enter the Marks : "<<endl;
	cout<<"English : ";
	cin>>eng;
	cout<<"Maths : ";
	cin>>maths;
	cout<<"Computer : ";
	cin>>com;
	cout<<"Science : ";
	cin>>sci;
	avg = (eng+maths+com+sci)/4;
}
int main()
{
	int noOfstd;
	cout<<"Enter the total no of student : ";
	cin>>noOfstd;
	student sms[noOfstd];
	for(int i=0; i<noOfstd; i++)
	{
		sms[i].getInfo();
	}
	ofstream bob("std.txt");
	for(int i=0; i<noOfstd; i++)
	{
		bob<<"Student id : "
		<<endl<<"\t"
		<<"Name : "<<sms[i].stdName()
		<<endl<<"\t"
		<<"Roll no : "<<sms[i].stdRollno()
		<<endl<<"\t"
		<<"Average : "<<sms[i].stdAverage()
		<<endl
		<<"***********************************"
		<<endl;
	}
	bob.close();
	return 0;
}