//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by Samuel Hollenbeck on 10/19/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//Declare variables 
    double day = 1.0;
    double totalTexts = 0.0;
    double dailyTexts = 0.0;
    double average = 0.0; 

//Loop to get the number of texts each day
    while (day < 8)
    {
        cout << "How many text messages did you send on day " << day << "? ";
        cin >> dailyTexts;
        totalTexts += dailyTexts;
        day += 1;
    }   //end while

//Calculate and display the average number of texts
    average = totalTexts / 7;
    cout << fixed << setprecision(0);
    cout << "You sent approxiametly " << average << " text messages each day." << endl;

    return 0;
}   //end of main function