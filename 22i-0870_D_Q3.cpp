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
	char f = '*';
	char h = '(';
	char i = ')';
	char x = '#';
	char y = '!';
	char z = '@';
	//Not assigning any values to the windows and grass since it will be inputted by user
	char w, g;
	cout << "Enter the window style for the FAST Main Building:  ";
	cin >> w;
	cout << endl << "Enter the grass style for the FAST Main Building:  ";
	cin >> g;
	//Starting the building using only 1 cout statement
	cout << endl << endl << setw(9) << y << setw(33) << z << setw(32) << y << endl /*End of First Row*/ << setw(8) << h << f << i << setw(30) << h << f << f << f << i << setw(29) << h << f << i << endl /*End of Second Row*/ << setw(7) << h << f << f << f << i << setw(27) << h << h << f << f << f << f << f << i << i << setw(26) << h << f << f << f << i << endl /*End of Third Row*/<< setw(6) << d << x << d << x << d << x << d << setw(25) << h << h << d << x << d << x << d << x << d << i << i << setw(24) << d << x << d << x << d << x << d << endl /*End of Fourth Row*/ << setw(3) << b << c << a << setw(2) << f << f << f << f << f << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << x << x << x << x << x << x << x << x << x << x << x << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << f << f << f << f << f << setw(2) << a << b << c << endl /*End of FIfth Row*/ << setw(3) << d << setw(4) << d << setw(3) << d << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(3) << d << setw(4) << w << setw(3) << d << setw(2) << d << setw(2) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(2) << d << setw(3) << w << setw(3) << d << setw(3) << d << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(3) << d << setw(3) << d << endl /*End of Sixth Row*/ << setw(3) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << a << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << setw(2) << e << endl /*End of Seventh Row*/ << setw(3) << d << setw(5) << d << setw(3) << d << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(3) << d << setw(3) << w << setw(3) << d << setw(2) << d << setw(2) << d << setw(6) << d << setw(2) << d << setw(2) << d << setw(3) << w << setw(3) << d << setw(3) << d << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(3) << d << setw(4) << d << endl /*End of Eighth Row*/ << setw(3) << d << setw(5) << d << setw(3) << d << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(3) << d << setw(3) << w << setw(3) << d << setw(2) << d << setw(2) << d << setw(6) << d << setw(2) << d << setw(2) << d << setw(3) << w << setw(3) << d << setw(3) << d << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(3) << d << setw(4) << d << endl /*End of Ninth Row*/ << setw(3) << d << setw(5) << d << setw(3) << d << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(3) << d << setw(3) << w << setw(3) << d << setw(2) << d << a << d << a << setw(2) << a << setw(2) << a << d << a << d << setw(2) << d << setw(3) << w << setw(3) << d << setw(3) << d << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(3) << d << setw(4) << d << endl /*End of Tenth Row*/ << setw(3) << d << setw(5) << d << setw(3) << d << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(3) << d << setw(3) << w << setw(3) << d << setw(2) << d << setw(2) << d << setw(6) << d << setw(2) << d << setw(2) << d << setw(3) << w << setw(3) << d << setw(3) << d << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(3) << d << setw(4) << d << endl /*End of Eleventh Row*/ << setw(3) << d << setw(5) << d << setw(3) << d << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(3) << d << setw(3) << w << setw(3) << d << setw(2) << d << a << d << a << setw(2) << a << setw(2) << a << d << a << d << setw(2) << d << setw(3) << w << setw(3) << d << setw(3) << d << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << w << setw(3) << d << setw(3) << d << setw(4) << d << endl /*End of Twelfth Row*/ << setw(2) << b << setw(34) << b << setw(5) << a << setw(2) << a << setw(5) << c << setw(33) << c << endl /*End of Thirteenth Row*/ << b << setw(5) << g << setw(3) << g << setw(3) << g << setw(3) << g << setw(3) << g << setw(3) << g << setw(3) << g << setw(3) << g << setw(3) << setw(8) << b << setw(5) << b << a << setw(2) << a << c << setw(5) << c << setw(5) << g << setw(3) << g << setw(3) << g << setw(3) << g << setw(3) << g << setw(3) << g << setw(3) << g << setw(3) << g << setw(3) << setw(7) << c << endl /*End of Fourteenth Row*/;
	return 0;
}
