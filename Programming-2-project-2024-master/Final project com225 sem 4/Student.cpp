#include "Student.h"
using namespace std;

void Student::setId(int id) {
	cout << "Enter your ID: "<<endl;
	cin >> id;
	
	Id = id;
}
int Student::getid() {
	return Id;
}
void Student::set_studentName() {
	 User(username);

}


void Student::viewTranscript()
{
	// Open the TXT file
	ifstream file("ReadWriteFiles/transcript.txt");
	if (!file.is_open()) {
		cout << "Failed to open file." << endl;
		return;
	}

	// Read the file line by line
	string line;
	while (getline(file, line)) {
		// Use stringstream to parse each line
		stringstream ss(line);
		string item;

		// Read the course code
		getline(ss, item, ',');
		string courseCode = item;

		// Read the course name
		getline(ss, item, ',');
		string courseName = item;

		// Read the credit hours
		getline(ss, item, ',');
		int creditHours = stoi(item);

		// Output the course details
		cout << "Course Code: " << courseCode << ", Name: " << courseName << ", Credit Hours: " << creditHours << endl;
	}

	// Close the file
	file.close();
}


int Student::updateGrade() {

	return 0;
}
void Student::enrollCourse() {
	// Open the CSV file in append mode
	ofstream file("ReadWriteFiles/courses.csv", ios::app);
	if (!file.is_open()) {
		cout << "Failed to open file." << endl;
		return;
	}

	// Keep asking the user to enroll in courses until they decide to exit
	string course;
	do {
		// Ask the user to enter the course
		cout << "Enter the course you want to enroll in (or type 'exit' to quit): ";
		cin >> course;

		// Check if the user wants to exit
		if (course == "exit" || course == "Exit" || course == "EXIT") {
			break;
		}

		// Write the course to the file
		file << course << endl;

		cout << "You have enrolled in " << course << endl;
	} while (true);

	// Close the file
	file.close();
}

void Student::studentGrades() {
	int grades[6]{};
	string courses[6]{};

	// Open the CSV file
	ifstream file("ReadWriteFiles/StudentCoursegrades.txt");
	if (!file.is_open()) {
		cout << "Failed to open file." << endl;
		return;
	}

	// Read the file line by line
	string line;
	int index = 0;
	while (getline(file, line)) {
		// Use stringstream to parse each line
		stringstream ss(line);
		string item;

		// Read the grade
		if (getline(ss, item, ',')) {
			grades[index] = stoi(item);
		}

		// Read the course
		if (getline(ss, item, ',')) {
			courses[index] = item;
		}

		// Move to the next index
		index++;

		// Break if we have read all values
		if (index >= 6) {
			break;
		}
	}

	// Close the file
	file.close();

	// Print the values (optional)
	for (int i = 0; i < 6; ++i) {
		cout << "Course: " << courses[i] << ", Grade: " << grades[i] << endl;
	}

	calculateGpa(grades);
}

void Student::calculateGpa(int grades[]) {//wrong done gets average grade 
	double sum = 0;
	for (int i = 0; i < 6; i++) {
		sum += grades[i];
	}
	Grades = sum / 6;

	cout << "Your GPA is: " << Grades << endl;
} 