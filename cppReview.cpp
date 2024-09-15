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
    cout << "=================================================" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "1. cout & cin" << endl;
    cout << "2. Pass by Reference vs Value" << endl;
    cout << "3. Loops" << endl;
    cout << "4. Arrays" << endl;
    //5. Functions
    //--
    //6. Characters
    //7. Strings
    //8. getline & cin
    //--
    //9. Strucs
    //--
    //10. Matrix
    //11. Using Data Files
    //--
    //12. Classes
    //13. Objects
    cout << "0. Quit Program" << endl;
    cout << "" << endl;
    cout << "Choice Number: ";
    cin >> choice;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "=================================================" << endl;

    switch (choice) {
    case 1: // cout & cin
      cout << "cout & cin:" << endl;
      cout << "----------" << endl;
      cout << "This is cout printing out text." << endl; // endl inserts a new line below
      cout << "Enter a number 1 though 10: ";
      cin >> num1;
      if (num1 > 0 && num1 <= 10) {
        cout << "cin just took in your number, which is " << num1 << endl;
      } else {
        cout << num1 << " is not within 1 and 10 but cin takes in users input" << endl;
      }
      break;

    case 2: // pass by reference vs value
      cout << "Pass by Reference:" << endl;
      cout << "-----------------" << endl;
      cout << "void swapnum(int &i, int &j) {" << endl;
      cout << "  int temp = i;" << endl;
      cout << "  i = j;" << endl;
      cout << "  j = temp;" << endl;
      cout << "}" << endl;
      cout << "" << endl;
      cout << "int main(void) {" << endl;
      cout << "  int a = 10;" << endl;
      cout << "  int b = 20;" << endl;
      cout << "  swapnum(a, b);" << endl;
      cout << "  printf(""A is &d and B is &d, a, b"");" << endl;
      cout << "  return 0;" << endl;
      cout << "}" << endl;
      cout << "A is 20 and B is 10" << endl;
      cout << "***************************************" << endl;
      cout << "Pass by Value:" << endl;
      cout << "-------------" << endl;
      cout << "void func (int a, int b){" << endl;
      cout << "  a += b;" << endl;
      cout << "  printf(""In func, a = %/d    b = %/d"", a, b);" << endl;
      cout << "}" << endl;
      cout << "int main(void){" << endl;
      cout << "  int x = 5, y = 7;" << endl;
      cout << "  func(x, y);" << endl;
      cout << "  printf(""In main, x = %/d    y = %/d"", x, y);" << endl;
      cout << "  return 0;" << endl;
      cout << "}" << endl;
      cout << "In func, a = 12 b = 7" << endl;
      cout << "In main, x = 5  y = 7" << endl;
      break; 

    case 3: // Loops
      cout << "Loops:" << endl;
      cout << "***************************************" << endl;
      cout << "For Loops:" << endl;
      cout << "---------" << endl;
      cout << "for(int i = 0; i < 0; i++)" << endl;
      cout << "{recurring statements}" << endl;
      cout << "***************************************" << endl;
      cout << "While Loops:" << endl;
      cout << "-----------" << endl;
      cout << "I = 0;" << endl;
      cout << "while(I < 10){" << endl;
      cout << "cout << I" << endl;
      cout << "I++;" << endl;
      cout << "}" << endl;
      cout << "or ---" << endl;
      cout << "ans = 'Y'" << endl;
      cout << "while(ans != 'N'){" << endl;
      cout << "//call some functions" << endl;
      cout << "cout << \"continue?\";" << endl;
      cout << "cin << ans;" << endl;
      cout << "}" << endl;
      cout << "***************************************" << endl;
      cout << "Do-While Loops:" << endl;
      cout << "--------------" << endl;
      cout << "int counter = 0;" << endl;
      cout << "do {" << endl;
      cout << "  cout << \"Counter value: \" << counter << endl;" << endl;
      cout << "  counter++; // Increment the counter" << endl;
      cout << "} while (counter < 5); // Continue looping while counter is less than 5" << endl;
      break;

    case 4: // array
      cout << "Array:" << endl;
      cout << "--------------" << endl;
      cout << "declare: <type> <name>[num of slots]" << endl;
      cout << "    int scores[3] = {1, 2, 3}" << endl;
      cout << "for loop:" << endl;
      cout << "// user intputs for each slot of array" << endl;
      cout << "for(int i = 0; i < 3; i++){" << endl;
      cout << "  cin >> scores[i]; }" << endl;
      cout << "// outputs all slots in array" << endl;
      cout << "for(int j = 0; j < 10; j++){" << endl;
      cout << "  cout << scores[j]; }" << endl;
      cout << "change the output of a slot:" << endl;
      cout << "  scores[0] = 6" << endl;
      cout << "  scores[3] = {6, 2, 3};" << endl;
      break;
    
    case 0: // quit case
      cout << "Thanks for Reviewing!" << endl;
      break;

    default:
      cout << "Not a valid choice." << endl;
      cout << "Please select one of the following numerical options." << endl;
      break;
    }
  }
  while (choice != 0);

  return 0;
}
