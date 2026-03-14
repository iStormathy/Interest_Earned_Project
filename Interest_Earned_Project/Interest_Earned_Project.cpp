#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double principal, rate, times;
	cout << "Enter your principal: " << endl;
	cin >> principal;
	cout << "Enter your interest rate: " << endl;
	cin >> rate;
	cout << "Enter your annual compound time: " << endl;
	cin >> times;
	double annualInterest = principal * pow (1 + rate / 100 / times, times);
	cout << "Your balance after 1 year is " << annualInterest << endl;

	return 0;
}