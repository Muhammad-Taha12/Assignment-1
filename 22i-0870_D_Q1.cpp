/* Name: Muhammad Taha
Student Id: 22I-0870
Assignment - 1 */
#include<iostream>
using namespace std;
int main()
{
	//Declaration
	char character;
	//Asking user to input a character
	cout << "Enter an uppercase letter: ";
	cin >> character;
	//Using their ASCII code values, every small letter is 32 characters away from their capital variants
	character += 32;
	//Outputting
	cout << "The lowercase of the letter you entered is: " << character << endl;
	return 0;
}
