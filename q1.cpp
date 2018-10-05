// Power of any number

//include library
#include <iostream>
using namespace std;

int power(int, int);


int main() 

{
	int a, b, result;
//asking user of value
	cout<<"Enter a number of base: ";
	cin >> a;

	cout << "Enter a number of power: ";
	cin >> b;

	result = power(a,b)//result
	cout << "Result is = " << result;

	return 0;
}


int power(int a, int b)
{
	if (b != 0) 
		return (a*power(a, b-1));//loop

	else 
		return 1;
}
