#include<iostream>
using namespace std;

// Second homework assignment from Simple Code.


void main()
{ 
	int firstNumber, secondNumber, thirdNumber;

	cout << "Write first number: ";
	cin >> firstNumber;
	cout << "Write second number: ";
	cin >> secondNumber;
	cout << "Write third number: ";
	cin >> thirdNumber;

	cout << "Sum of these three numbers is: " << (firstNumber + secondNumber + thirdNumber) << endl;
	cout << "Product of these three numbers is: " << (firstNumber * secondNumber * thirdNumber) << endl;
	cout << "Arithmetic mean of these three numbers is: " << ((firstNumber + secondNumber + thirdNumber) / 3) << endl;

}