#include<iostream>
using namespace std;
int main()
{
	int sum(int);
	int val;
	val = sum(8);
	cout<<val;
	return 0;
}
int sum(int n)
{
	if(n == 1)
	{
		return 1;
	}
	return sum(n-1)+n;
}





