/* Name: Muhammad Taha
Student Id: 22I-0870
Assignment - 1 */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//Declaring the variables
	int i, a, b;
	int u = 3;
	int p = 4;
	double result;
	//Getting input from user
	cout << "Enter the value for i: ";
	cin >> i;
	cout << "Enter the value for a: ";
	cin >> a;
	cout << "Enter the value for b: ";
	cin >> b;
	//Calculating
	result = (pow(u * pow(i, (a * 1.0/b)) * (pow(i, 2) - 1), 0.5)) / (pow((p * i) - 2, 0.5) + pow((p * i) - 1, 0.5)); //Multiplied with 1.0 to turn it into a double value
	//Outputting the result
	cout << "The result is: " << result << endl;
	return 0;
}
