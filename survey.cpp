//
// Created by Anthony Fonseca on 9/20/24.
//

#include <iostream>
using namespace std;

int main() {
  int choice;
  int numPeople = 0;
  int coffeeCount = 0, teaCount = 0, cokeCount = 0, ojCount = 0;

  cout << "-=-=- Beverages -=-=-" << endl;
  cout << "1. Coffee\n2. Tea\n3. Coke\n4. Orange Juice" << endl << endl;

  do {
    numPeople += 1;
    cout << "Please input the favorite beverage of person #" << numPeople
         << " or -1 to end the program." << endl;
    cin >> choice;

    if (choice == 1)
        coffeeCount++;
    else if (choice == 2)
        teaCount++;
    else if (choice == 3)
        cokeCount++;
    else if (choice == 4)
        ojCount++;
    else if (choice == -1)
        numPeople -= 1;
    else
        cout << "Invalid choice." << endl;

  } while (choice != -1);

  cout << endl << "The total number of people surveyed is " << numPeople
    << ". The results are as follows:" << endl;
  cout << "Beverage\t\tNumber of Votes\n*****************************" << endl;
  cout << "Coffee\t\t\t" << coffeeCount << endl;
  cout << "Tea\t\t\t\t" << teaCount << endl;
  cout << "Coke\t\t\t" << cokeCount << endl;
  cout << "Oj\t\t\t\t" << ojCount << endl;
}