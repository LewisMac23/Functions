// CreatingVoidFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Code from "CreatingCustomFunctions2"

#include<iostream>
#include<cmath>

using namespace std;

//Here the function has a return value of type double
//We can actually create functions that do not return values, known as VOID functions
double power(double base, int  exponent) 
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}
//Here is a VOID function called "print_pow"

void print_pow(double base, int exponent) //In general functions should only do one thing and that thing should be seen in the identifier, i.e, "print_pow" - print power
{
	double myPower = power(base, exponent); //this calls the "power" function
	cout << base << "raised to the" << exponent << "power is" << myPower << ".\n";
}

int main()
{
	double base;
	int exponent;
	cout << "What is the base?:";
	cin >> base;
	cout << "What is the exponent?:";
	cin >> exponent;
	print_pow(base, exponent);

	//Can then do the below as many times as u want

	print_pow(100, 4);
	print_pow(4, 2);

}
