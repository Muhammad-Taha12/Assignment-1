/* Name: Muhammad Taha
Student Id: 22I-0870
Assignment - 1 */
#include<iostream>
using namespace std;
int main()
{
	//Declaring Variables
	double wage, hours, tax, total_without_tax, pay;
	//Getting input from user
	cout << "Enter hourly wage: ";
	cin >> wage;
	cout << "Enter number of hours: ";
	cin >> hours;
	cout << "Enter withholding tax: ";
	cin >> tax;
	//Calculating
	total_without_tax = wage * hours;
	tax = (tax / 100) * total_without_tax;
	pay = total_without_tax - tax;
	//Outputting result
	cout << "Net Pay: " << pay << endl;
	return 0;
}
