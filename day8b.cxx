#include<iostream>
#include<map>
using namespace std;
int main()
{
			// data types
	long phone_no;
	string name;
			// size of input
	int size;
	cin>>size;
			// creating a map
	map <string, long> phone_book;
	for(int i=0; i<size; i++)
	{
		cin>>name;
		cin>>phone_no;
		phone_book[name] = phone_no;
	}
	while(cin>>name)
	{
		if(phone_book.find(name)!=phone_book.end())
		{
			cout<<name<<"="<<phone_book.find(name)->second<<endl;
		}
		else
		{
			cout<<"Not found"<<endl;
		}
	}
	return 0;
}