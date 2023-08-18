/* Name: Muhammad Taha
Student Id: 22I-0870
Assignment - 1 */
#include<iostream>
using namespace std;
int main()
{
	//Declaration
	int decimal, hours, minutes, seconds;
	//Getting input from user
	cout << "Enter a two-byte Time Value: ";
	cin >> decimal;
	seconds = decimal & 63; //63 is the decimal value of 111111, so only last 4 bits remain
	minutes = (decimal & 4032) >> 6; //4032 is the decimal value of 1111110000000, so only bits 6-11 remain, so we shift 6 places right so they're the last 6 bits
	hours = (decimal & -4096) >> 12; //-4096 is the decimal value of 1111000000000000, so only bits 12-15 remain, so we shift 12 places right so they're the last 4 bits
	//Outputting
	cout << "Time is " << hours << " hrs " << minutes << " mins " << seconds << " secs" << endl;
	return 0;
}
