// Print sum of numbers

//include library
#include <iostream>
using namespace std;

int add (int  a, int b)
{
	if (b==a+1)
		return 0;
	else
	{
		int sum=b++;

		return sum+add (a,b);
	}
}


int main()

{

	int n;
	
	cout << "Input a number : "<<endl;
	cin >>n;

	add (n,0);

	cout << "sum of all natural numbers from 1 to "<<n<< " is "<< add (n,0)<<endl;
	return 0;
}
