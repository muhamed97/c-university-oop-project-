#include "University.h"
#include <string>
using namespace std;
 void University::setUniCollage(string ncollage) {
	list_collages = ncollage;
}
string University::addUniCollage() {
	return list_collages;
}
void University::setUniDeparments() {
    cout << "There are 3 departments in " << addUniCollage() << endl;
    cout << "1. Computer Engineering" << endl;
    cout << "2. Mechanical Engineering" << endl;
    cout << "3. Communication Engineering" << endl;

    int choice;

    while (true) {
        cout << "Please enter the department number (1-3): ";

        // Check if the input is an integer
        if (!(cin >> choice)) {
            // Clear the input stream
            cin.clear();
            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');    // copied from stackOverFlow to make this work , expalination:this ensures that any remaining invalid characters in the input buffer are discarded before proceeding.
            cout << "Invalid input. Please enter a number." << endl;
             
            continue;
        }

        switch (choice) {
        case 1:
            cout << "Computer Engineering" << endl;
            cout << "Thank you for choosing Computer Engineering." << endl;
            return;
        case 2:
            cout << "Mechanical Engineering" << endl;
            cout << "Thank you for choosing Mechanical Engineering." << endl;
            return;
        case 3:
            cout << "Communication Engineering" << endl;
            cout << "Thank you for choosing Communication Engineering." << endl;
            return;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
        }
    }

    cout << "Maximum attempts reached. Exiting department selection." << endl;
}



void University::setUniName(string n) {
	uni_name = n;
}
string University::addUniName() {
	return uni_name;
}