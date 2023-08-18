/* Name: Muhammad Taha
Student Id: 22I-0870
Assignment - 1 */
#include<iostream>
using namespace std;
int main()
{
	//Declaring variables
	int num1, num2, operation1, operation2, operation3, operation4, output;
	//Getting input from user
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	//Using bitwise operators to add, the same logic is repeated multiple times to work for integers with sizes up to 8 bits
	operation1 = num1 ^ num2;
	operation2 = num1 & num2;
	operation2 = operation2 << 1;
	operation3 = operation1 ^ operation2;
	operation4 = operation1 & operation2;
	operation4 = operation4 << 1;
	operation1 = operation3 ^ operation4;
	operation2 = operation3 & operation4;
	operation2 = operation2 << 1;
	operation3 = operation1 ^ operation2;
	operation4 = operation1 & operation2;
	operation4 = operation4 << 1;
	output = operation3 | operation4;
	//Outputting the sum
	cout << "Output: " << output << endl;
	return 0;
}
