//Lab7-4.cpp - displays the average electric bill
//Created/revised by Samuel Hollenbeck on 10/19/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
		double avgBill = 0.0;
		double bill = 0.0;
		double totalBills = 0.0;
		int months = 0;

		cout << fixed << setprecision(2);

		cout << "Bill for month 1: ";
		cin >> bill;

		while (bill >= 0.0) 
		{   
				months += 1;
				totalBills += bill;

				cout << "Bill for month " << months + 1 << ": ";
				cin >> bill;
		}
		if (months > 0) 
		{    
				avgBill = totalBills / months;
				cout << "Average electric bill for " << months << " months: $" << avgBill << endl;
		} 
		else 
		{
				cout << "No bill amount entered." << endl;
		}
		return 0;
}   //end of main function