#include<iostream>
using namespace std;
int main()
{
	char ch;
	string password;
	srand(time(0));
	for(int i=0; i<6; i++)
	{
		ch = (rand()%26)+99;
		password += ch;
	}
	cout<<password<<endl;
	return 0;
}