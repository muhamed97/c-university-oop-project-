#pragma once
#ifndef User_h
#define User_h


#include<iostream>
#include<string>
using namespace std;
class User
{
	//string username;
	//string email;
	//string passwoprd;
	//string role;
public:
	string email;
	string password;
	string username;
	string role;
	void login();
	void logout();
	void changePass();
	void setUserRole(string);
	string getUserRole();
	void Register();
#endif 
};

