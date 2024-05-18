#include "Menue.h"
#include"User.h"
#include"University.h"
#include"Student.h"
using namespace std;
void Menue::displayMenu() {
	User user;
	University university;
	Student student;	
	Academic_staff acadStuff;
	user.Register();
	user.login();
	string changePass, uniname;
	cout << "Please Add univerity name " << endl;
	cin >> uniname;
	university.setUniName(uniname);
	
	user.changePass();
	
	university.setUniDeparments();


    bool exitProgram = false;

    while (!exitProgram) {
        string role;
        cout << "What is the role of the user: " << endl;
        cout << "1. Student" << endl;
        cout << "2. Academic staff" << endl;
        cout << "Enter 'exit' to quit." << endl;
        cin >> role;

        if (role == "1") {
            cout << "Welcome to the student portal " << user.username << endl;
            student.setId(1);
            string identifier;

            do {
                cout << "\n\n\n";
                cout << "Please G to display grades" << endl;
                cout << "Please E to enroll in a course" << endl;
                cout << "Please T to view transcript" << endl;
                cout << "Press 'ex' to log out" << endl;
                cout << "Press 'back' to switch roles" << endl;
                cout << "\n\n\n\n\n\n";
                cin >> identifier;

                if (identifier == "G" || identifier == "g") {
                    student.studentGrades();    // done read from csv file
                }
                else if (identifier == "E" || identifier == "e") {
                    student.enrollCourse();    // done read from csv file
                }
                else if (identifier == "T" || identifier == "t") {
                    student.viewTranscript();    // done read from csv file
                }
                else if (identifier == "ex") {
                    exitSystem();
                    exitProgram = true;
                    break;
                }
                else if (identifier == "back") {
                    break; // Exit the student role and go back to role selection
                }
                else {
                    cout << "Invalid choice" << endl;
                }
            } while (identifier != "ex");

        }
        else if (role == "2") {
            cout << "Welcome to the Academic staff portal" << endl;
            acadStuff.setStaffId(1);
            string identifier;

            do {
                cout << "\n\n\n";
                cout << "Press H to set office hours" << endl;
                cout << "Press C to view Student list" << endl;
                cout << "Press G to view the grades of the students in the last assignment " << endl;
                cout << "Press 'ex' to log out" << endl;
                cout << "Press 'back' to switch roles" << endl;
                cout << "\n\n\n\n\n\n";
                cin >> identifier;

                if (identifier == "H" || identifier == "h") {
                    student.setOfficeHours();
                }
                else if (identifier == "C" || identifier == "c") {
                    student.viewStudentsList();
                }
                else if (identifier == "G" || identifier == "g") {
                    student.GradeAssignment();
                }
                else if (identifier == "ex") {
                    exitSystem();
                    exitProgram = true;
                    break;
                }
                else if (identifier == "back") {
                    break; // Exit the academic staff role and go back to role selection
                }
                else {
                    cout << "Invalid choice" << endl;
                }
            } while (identifier != "ex");

        }
        else if (role == "exit") {
            exitProgram = true;
        }
        else {
            cout << "Invalid choice" << endl;
        }
    }



}
void Menue::exitSystem() {
	cout << "Thank you for using the system" << endl;
}
