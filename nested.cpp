// This program finds the average time spent programming by a student
// each day over a three day period.

// Anthony Fonseca

#include <iostream>
using namespace std;

int main()
{
	int numStudents, numDays;
	float numHoursBio, numHoursProg, totalBio, totalProg,
		average, averageBio, averageProg;
	int student, day = 0;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?" << endl;
	cin >> numStudents;
	cout << "Enter number of days in the long weekend:" << endl;
	cin >> numDays;

	for (student = 1; student <= numStudents; student++)
	{
		totalBio = 0;
		totalProg = 0;

		for (day = 1; day <= numDays; day++)
		{
			cout << "Please enter the number of hours worked by student " << student
				 << " on programming on day " << day << "." << endl;
			cin >> numHoursProg;

			cout << "Please enter the number of hours worked by student " << student
				 << " on biology on day " << day << "." << endl;
			cin >> numHoursBio;

			totalProg = totalProg + numHoursProg;
			totalBio = totalBio + numHoursBio;
		}

		averageProg = totalProg / numDays;
		averageBio = totalBio / numDays;

		cout << endl;
		cout << "The average number of hours per day spent on biology by "
			 << "student " << student << " is " << averageProg
			 << endl;
		cout << "The average number of hours per day spent on "
			 << "programming by student " << student << " is "
			 << averageBio << endl << endl << endl;
	}

	return 0;
}