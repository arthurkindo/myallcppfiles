#include<iostream>
using namespace std;

			// our sters class start;
class sters{
	char ster[7][7];
	public:
			// our ctor sters start
			sters(){
				for(int i=0; i<7; i++){
					for(int j=0; j<7; j++){
						ster[i][j] = '*';
					}
				}
			}
			// end of our ctor sters
			void display_sters(void);
			void display_cross(void);
			void display_plus(void);
			
};
		// display sters function
void sters :: display_sters(){
	for(int i=0; i<7; i++){
		for(int j=0; j<7; j++){
			cout<<ster[i][j];	
		}
		cout<<endl;
	}
}
		// display cross function
void sters :: display_cross(){
	for(int i=0; i<7; i++)
	{
		for(int j=0; j<7; j++)
		{
			if((i==j) || ((i+j)==6)){
				cout<<ster[i][j];
			}
			else{
				cout<<" ";
			}			
		}
		cout<<endl;
	}
}
		// plus function
void sters :: display_plus(){
	for(int i=0; i<7; i++)
	{
		for(int j=0; j<7; j++)
		{
			if((i==3) || (j==3)){
				cout<<ster[i][j];
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

		// start of main function
int main()
{
	sters ron;
	ron.display_cross();
	ron.display_plus();
	return 0;
}