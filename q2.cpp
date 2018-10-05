// Print  numbers

//include library
#include <iostream>
using namespace std;

void print (int  a, int b)

{
	if (a==b)
	cout <<endl;

	else 
	{
	b++;
	cout << b << ", "<<endl;
	print (a,b);
	}
}


int main()

{

	int n;
	
	cout << "Input a number : "<<endl;
	cin >>n;

	print (n,0);
	return 0;
}
