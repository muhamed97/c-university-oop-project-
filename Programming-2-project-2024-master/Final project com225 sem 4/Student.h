#pragma once
#ifndef Student_h
#define Student_h
 

#include<string>
#include<iostream>
#include"User.h"
#include"Academic_staff.h"
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
class Student: public Academic_staff{
public:
	int Id;
	string studentName;
	string cources_enrolled;
public:
	//User(const ::string username) : username(studentName)
	double Grades;
	int getid();
	void setId(int);
	void set_studentName();
	void studentGrades();
	void enrollCourse();
	void viewTranscript();
	void calculateGpa(int[]);
	int updateGrade();
#endif
};

