#ifndef Academic_staff_h
#define Academic_staff_h
#include <fstream>
#include <sstream>
#include <string>


#pragma once
#include<string>
#include"User.h"
#include"University.h"
using namespace std;
class Academic_staff :public User, public University{
	int StaffId;
	string staffName;//inherit name------------------
	string staff_depatment;
	string courses_Tought;
	int office_hours;
	string students_list[5] = {"Mohamed","Ayman","Bilal","Yasser","Marwan"};
public:
	void setStaffId(int);
	int getStaffId();
	void teachcource();
	void viewStudentsList();
	void setOfficeHours();
	int getOfficehours();
	void GradeAssignment();



#endif


}; 

