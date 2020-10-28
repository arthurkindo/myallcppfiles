#include<iostream>
using namespace std;
class mrg
{
	string name;
	int rollno;
	string password;
	string phone_no;
	public:
			void get_info(void);
			void roll_no(void);
			void pass_word(void);
			void show_info(void);
};
			// get info function
void mrg :: get_info()
{
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter your phone no : ";
	cin>>phone_no;
	roll_no();
	pass_word();
	//rollno = roll_no();
	//password = pass_word();
}
				// roll no function
void mrg :: roll_no()
{
	int roll;
	srand(time(0));
	roll = (rand()%100000)+999999;
	rollno = roll;
	//return roll;
}
		// password function
void mrg :: pass_word()
{
	char ch;
	string pass;
	srand(time(0));
	for(int i=0; i<6; i++)
	{
		ch = (rand()%26)+99;
		pass += ch;
	}
	password = pass;
	//return pass;
}
		// show info function
void mrg :: show_info()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Roll no : "<<rollno<<endl
	<<"Password : "<<password<<endl;
	cout<<"Phone no : ";
	for(int i=0; i<10; i++)
	{
		cout<<phone_no[i];
	}
	cout<<endl;
}
int main()
{
	mrg csc[3];
	for(int i=0; i<3; i++)
	{
		csc[i].get_info();
	}
	for(int i=0; i<3; i++)
	{
		csc[i].show_info();
	}
	return 0;
}