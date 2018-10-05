// Print even/odd numbers

//include library
#include <iostream>
using namespace std;

void printeven (int  a, int b)
{
	if (a==b)
	cout <<endl;

	else 
	{
	b++;

		if (b%2==0)
	cout << b <<endl;
	printeven (a,b);
	}
}

void printodd (int  a, int b)
{
	if (a==b)
	cout <<endl;

	else 
	{
	b++;

		if (b%2==1)
	cout << b <<endl;
	printodd (a,b);
	}
}


int main()

{Even

	int m;
	int n;
	int o;
	
	cout << "Input two numbers : "<<endl;
	cin >>m;
	cin >>n;

	if (m>n)
	{
		cout << "Type 1 : Even Numbers"<<endl;
		cout << "Type 2 : Odd Numbers"<<endl;
		cin >> o;

		if (o==1)
			printeven (m,n);	

		else if (o==2)
			printodd (m,n);

		else 
			cout << "Please enter 1 or 2"<<endl;
	}
	else 
		cout << "first value should be greater than the second"<<endl;

	return 0;
}

