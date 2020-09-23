#include <iostream>
using namespace std;

int main() {
	srand(time(0));
	int a = (rand() % 100) + 1; 
	cout<<"Secret number chosen (between 1 and 100)."<<endl;
	cout<<"Start guessing! ... "<<endl;
	int guess;

	while(true)
	{
		cin>>guess;
		if(guess==a)
		{
			cout<<"Congratlations, you won!"<<endl;
			break;
		}
		else if(guess>a)
		{
			cout<<"Too hot!"<<endl;
		}
		else
		{
			cout<<"Too cold"<<endl;
		}
	}
	cout<<"Secter number is: "<<a;
	return 0;
}
