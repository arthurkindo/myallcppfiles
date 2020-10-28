#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char tab = '\t';
	char book_name[100];
	char author_name[90];
	int isbn_no;
	int total_page;
	int total_books;
				// taking input of total amount of 
	cout<<"Enter the total no of books : ";
	cin>>total_books;
	 
	  		// creating a file book_list
	ofstream ram;
	ram.open("book_list.txt", ios::out);
	ram<<"ISBN"<<tab<<"NAME"<<tab<<"TOTAL PAGE"<<tab
	<<"AUTHOR"<<endl;
	for(int i=0; i<total_books; i++)
	{
		cout<<"Enter the ISBN No : ";
		cin>>isbn_no;
		cout<<"Enter the name of the book : ";
		cin>>book_name;
		cout<<"Enter the total pages : ";
		cin>>total_page;
		cout<<"Enter the Name of Author : ";
		cin>>author_name;
		ram<<isbn_no<<tab<<book_name<<tab
		<<total_page<<tab<<author_name<<endl;
	}
	ram.close();
	
	return 0;
}