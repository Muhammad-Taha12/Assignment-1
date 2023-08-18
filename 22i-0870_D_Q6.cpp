/* Name: Muhammad Taha
Student Id: 22I-0870
Assignment - 1 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Declaring Variables
	int Rupees, Rs500, Rs100, Rs50, Rs20, Rs10, Rs5;
	//Taking input from user
	cout << "Enter amount in rupees between 100 and 100000: ";
	cin >> Rupees;
	//Performing calculations
	Rs500 = Rupees / 500;
	Rupees -= Rs500 * 500;
	Rs100 = Rupees / 100;
	Rupees -= Rs100 * 100;
	Rs50 = Rupees / 50;
	Rupees -= Rs50 * 50;
	Rs20 = Rupees / 20;
	Rupees -= Rs20 * 20;
	Rs10 = Rupees / 10;
	Rupees -= Rs10 * 10;
	Rs5 = Rupees / 5;
	Rupees -= Rs5 * 5; 
	//Outputting
	cout << "Currency Note" << setw(12) << ":Number" << endl;
	cout << "500" << setw(16) << ":" << Rs500 << endl;
	cout << "100" << setw(16) << ":" << Rs100 << endl;
	cout << "50" << setw(17) << ":" << Rs50 << endl;
	cout << "20" << setw(17) << ":" << Rs20 << endl;
	cout << "10" << setw(17) << ":" << Rs10 << endl;
	cout << "5" << setw(18) << ":" << Rs5 << endl;
	cout << "1" << setw(18) << ":" << Rupees << endl;
	return 0;
}
