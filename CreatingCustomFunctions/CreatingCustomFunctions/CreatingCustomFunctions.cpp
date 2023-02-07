// CreatingCustomFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//General function form;
int main()
{
	return 0;
}
//The parenthesis "()" is where the INPUT will be inserted
//The INPUT will be stored in PARAMETERS
//The data in ARGUMENTS of a function is stored in the PARAMETERS

//Example of a CUSTOM function DEFINITION AND CALLING
// 
//DEFINITION (Inckude DECLARATION e.g (Int X)

int multiply(int x, int y)
{
	return x * y;
}
//This defines the function with its name,variable types and what the function does, in this case it multiplys ints

//CALLING

multiply(2, 5);

//This multiplies 2 by 5

//If a variable exists already e.g
int x = 5
//Then to multiply this by 2 and reassign x as the new Integer
x = multiply(x,2)

//A HEADER file will contain the DECLARATIONS
//The other code will contain the DEFINITIONS(Object Code)