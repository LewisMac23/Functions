//An example of a custom function made by yourself
#include<iostream>
#include<cmath>
//For this the "cmath" library must be used

using namespace std;

//function can be declared after or before the MAIN
//In this case a function called "power" is declared before the MAIN

double power(double base, int  exponent) //declaring and defining
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}

//The main builds upon and uses stuff from "CreatingCustomFunctions1"

int main()
{
	int base, exponent; 
	cout << "What is the base?:";
	cin >> base;
	cout << "What is the exponent?:";
	cin >> exponent;
	double myPower = power(base, exponent);
		//double power = pow(base, exponent)
	cout << myPower << endl;
}