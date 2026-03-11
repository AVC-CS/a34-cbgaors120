#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  string month1, month2, month3;
  double rainfall1, rainfall2, rainfall3;
  double avg;

  // month1 = "May";
  // month2 = "June";
  // month3 = "July";

  // TODO: Read three months and their rainfall values from standard input
  cout << "Input month 1" << endl;
    cin >> month1;
      cout << "You have entered " << month1 << ". Input rainfall." << endl; 
        cin >> rainfall1;
          cout << "You have entered " << month1 << " with the rainfall of " << rainfall1 << "." << endl;
  
  cout << "Input month 2" << endl;
    cin >> month2;
      cout << "You have entered " << month2 << ". Input rainfall." << endl; 
        cin >> rainfall2;
          cout << "You have entered " << month2 << " with the rainfall of " << rainfall2 << "." << endl;

  cout << "Input month" << endl;
    cin >> month3;
      cout << "You have entered " << month3 << ". Input rainfall." << endl; 
        cin >> rainfall3;
          cout << "You have entered " << month3 << " with the rainfall of " << rainfall3 << "." << endl;

      // cout << "Rainfall for " << month1 << " is " << rainfall1 << endl;
  
  // cout << "Enter amount of rainfall for " << month2 << endl;
  //   cin >> rainfall2;
  //     cout << "Rainfall for " << month2 << " is " << rainfall2 << endl;
      
  // cout << "Enter amount of rainfall for " << month3 << endl;
  //   cin >> rainfall3;
  //     cout << "Rainfall for " << month3 << " is " << rainfall3 << endl;

  // TODO: Calculate the average rainfall

  avg = (rainfall1 + rainfall2 + rainfall3) / 3.0;

  cout << fixed << setprecision(2);
  // TODO: Print the result in the required format
  cout << "The average rainfall for " << month1 << " " << month2 << " " << month3 << " " << "is " << avg << "." << endl;



}