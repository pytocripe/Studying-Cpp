#include<iostream>
using namespace std;

// Third homework assignment from #SimpleCode

void main()
{
	int CheckNumber;
	cout << "Write the number you want to check: ";
	cin >> CheckNumber; 

	if ((CheckNumber % 2) == 0)
	{
		cout << "Number is even!"; 
	}
	else
	{
		cout << "Number is odd!";
	}

}