#include<iostream>
using namespace std;
		// login class for use for all
class login
{
	int passward;
	public:
				bool password(int);
};
		// password function that will int  
bool login :: password(int x)
{
	if(x == 5030)
	{
		return true;
	}
	else 
	{
		return false;
	}
}	// end of login function
		
			// libarry address info class
class lib_add : protected login
{
	public:
		char lib_name[50] = "Margherita Collage Libarry";
		char lib_address[100] = "No 3 Makumpather Margherita";
		char lib_telephone[11] = "995713758";
		char lib_pin[7] = "786181";	
		void change_lib_add(void);
		void display_lib_info(void);
	
};
			// creating the function change_lib_add
void lib_add :: change_lib_add()
{
	bool check;
	int num;
	cout<<"Enter the password : ";
	cin>>num;
	check = password(num);
	if(check)
	{
			cout<<"Enter the New Name : ";
			cin.ignore();
			cin.get(lib_name, 50);
			cout<<"Enter the New Address : ";
			cin.ignore();
			cin.get(lib_address, 100);
			cout<<"Enter the New Telephone no : ";
			cin.ignore();
			cin.get(lib_telephone, 11);
			cout<<"Enter the New Pin Code : ";
			cin.ignore();
			cin.get(lib_pin, 7);
	}
}
			// here is the dispaly function
void lib_add :: display_lib_info()
{
	string line = "----------";
	string tab = "\t";
	string add_tab = "\t";
			// creatin class for lib address
	cout<<line<<lib_name<<line<<endl;
	cout<<add_tab<<lib_address<<endl;
	cout<<add_tab<<"Telephone no : "<<lib_telephone<<endl;
	cout<<add_tab<<"Pin code : "<<lib_pin<<endl;
	   		// end of lib address for display 
}
				// creating a class for book 
				
				// creating function prototypes
void book_store(void);
int main()
{
	   	// making some of the data type
	int choise;
	   	// creating a class of lib_add
	lib_add lib;
	lib.display_lib_info();
		// end of display function from the class
	// making a boolen type
	//bool go = true
	// making a loop to run it 
while(true)
{
		// creating a main menu
	cout<<"\t\tMain menu"<<endl
	<<"\t1. Change the Address of Libarry."<<endl
	<<"\t2. Display the Libarry."<<endl
	<<"\t3. Get the list of all book."<<endl
	<<"\t10. Exit"<<endl;
	
			// taking the choise input from the user 
	cout<<"\tEnter your choise : ";
	cin>>choise;
	// make a switch fuction for the ittaration of the code
	switch (choise)
	{
		case 1: lib.change_lib_add();
					  break;
		case 2: lib.display_lib_info();
					  break;
		case 3: book_store();
					  break;
		case 10: return 0;
	}
}	
	return 0;
}
			//book store function
void book_store(void)
{
	ifstream roy;
	roy.open("book_list.txt", ios::in);
	char ch;
	while(roy.eof() == 0)
	{
		roy.get(ch);
		roy.put(ch);
	}
	roy.close();
}












