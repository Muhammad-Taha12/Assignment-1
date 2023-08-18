/* Name: Muhammad Taha
Student Id: 22I-0870
Assignment - 1 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Declaring the character variables and their values at the start
	char a = '_';
	char b = '/';
	char c = '\\';
	char d = '|';
	char e = '=';
	char f = '+';
	//Each line of code represents one line of the output
	cout << setw(11) << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
	cout << setw(10) << b << c << setw(24) << c << endl;
	cout << setw(9) << b << setw(3) << c << setw(24) << c << endl;
	cout << setw(8) << b << setw(5) << c << setw(8) << a << a << a << a << a << a << a << a << setw(9) << c << endl;
	cout << setw(7) << b << setw(7) << c << setw(7) << c << setw(4) << c << setw(4) << c << setw(9) << c << endl;
	cout << setw(6) << b << setw(9) << c << setw(7) << c << e << e << e << c << e << e << e << c << setw(9) << c << endl;
	cout << setw(5) << b << setw(11) << c << setw(7) << c << a << a << a << c << a << a << a << c << setw(9) << c << endl;
	cout << setw(4) << b << setw(13) << c << setw(24) << c << endl;
	cout << setw(3) << b << a << a << a << a << a << a << a << a << a << a << a << a << a << a << c << setw(24) << c << endl;
	cout << setw(2) << b << d << setw(15) << d << c << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << c << endl;
	cout << setw(3) << d << setw(15) << d << setw(24) << d << endl;
	cout << setw(3) << d << setw(15) << d << setw(24) << d << endl;
	cout << setw(3) << d << setw(15) << d << setw(24) << d << endl;
	cout << setw(3) << d << setw(6) << a << a << a << a << setw(6) << d << setw(11) << a << a << a << setw(11) << d << endl;
	cout << setw(3) << d << setw(5) << d << setw(5) << d << setw(5) << d << setw(10) << d << a << d << a << d << setw(10) << d << endl;
	cout << setw(3) << d << setw(5) << d << setw(5) << d << setw(5) << d << setw(10) << d << a << d << a << d << setw(10) << d << endl;
	cout << setw(3) << d << setw(5) << d << setw(5) << d << setw(5) << d << setw(24) << d << endl;
	cout << setw(3) << d << setw(5) << d << setw(4) << f << d << setw(5) << d << setw(24) << d << endl;
	cout << setw(3) << d << setw(5) << d << setw(5) << d << setw(5) << d << setw(24) << d << endl;
	cout << setw(3) << d << a << a << a << a << d << a << a << a << a << d << a << a << a << a << d << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << d << endl;
	return 0;
}
