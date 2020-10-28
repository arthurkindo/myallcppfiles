#include<iostream>
#include<fstream>
class student
{
	string name;
	int rollno;
	int eng, maths, com, social, sci;
	int avg;
	public:
		void getInfo(void);
		string name(void) return name;
		int rollNo(void) return rollon;
		float average(void); 
};
void student :: getInfo()
{
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Roll no : ";
	cin>>rollno;
	cout<<"Enter English mark : ";
	cin>>eng;
	cout<<"Enter Maths mark : ";
	cin>>maths;
	cout<<"Enter Compute mark : ";
	cin>>com;
	cout<<"Enter Social mark : ";
	cin>>social;
	cout<<"Enter Science mark : ";
	cin>>sci;
}
float student :: average()
{
	float a;
	a = (eng+maths+com+social+sci)/5;
	return a;
}
using namespace std;
int main()
{
	int noOfstd;
	cout<<"Enter the no of student : ";
	cin>>noOfstd;
	student sms[noOfstd];
	for(int i=0; i<noOfstd; i++)
	{
		sms[i].getInfo();
	}
	//write in a file by creating new file
	ofstream bob("stmary.txt");
	for(int i=0; i<noOfstd; i++)
	{
		bob<<"Student id : "<<i+1
		<<endl<<"\t"
		<<"Name : "<<sms[i].name()
		<<endl<<"\t"
		<<"Roll no : "<<sms[i].rollno()
		<<endl<<"\t"
		<<"Average : "<<sms[i].average()
		<<endl;
	}
	// closeing our file.....
	bob.close();
	
	return 0;
}


