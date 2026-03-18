// This program collects the users principal, interest rate,
// and compound time to calculate their balance after 1 year.
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
	double annualInterest = principal *(1 + rate / 100 / times); // Calculates final balance after compounding interest
	double interestEarned = annualInterest - principal; // Displays interest without factoring in principal
	cout << "Your interest earned: " << fixed << setprecision(2) << interestEarned << endl;
	cout << "Your balance after 1 year is " << fixed << setprecision(2) << annualInterest << endl;

	return 0;
}