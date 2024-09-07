// c++ Review concepts to practice and reference
using namespace std; // so we can use names for objects and variables from the library
#include <stdio.h>
#include <iostream> // allows us to work with cin and cout
#include <string>

int main(void) {
  // switch
  // case 1: cout & cin
    // endl -> end line use  \\ -> to inssert a \ in text output
    // \" -> insert " in text output  \t -> inserts a tab of space in text output
  int choice; // user menu choice
  int num1;
  cout << "====== This is my C++ Review code. ======" << endl;

  do {
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "1. cout & cin" << endl;
    cout << "0. Quit Program" << endl;
    cout << "" << endl;
    cout << "Choice Number: ";
    cin >> choice;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    switch (choice) {
    case 1: // cout & cin
      cout << "Choice 1:" << endl;
      cout << "This is cout printing out text." << endl; // endl inserts a new line below
      cout << "Enter a number 1 though 10: ";
      cin >> num1;
      if (num1 > 0 && num1 <= 10) {
        cout << "cin just took in your number, which is " << num1 << endl;
      } else {
        cout << num1 << " is not within 1 and 10 but cin takes in users input" << endl;
      }
      cout << "" << endl;
      break;

    case 0: // quit case
      cout << "Thanks for Reviewing!" << endl;
      cout << "" << endl;
      break;

    default:
      cout << "Not a valid choice." << endl;
      cout << "Please select one of the following numerical options." << endl;
      cout << "" << endl;
      break;
    }
  }
  while (choice != 0);

  return 0;
}
