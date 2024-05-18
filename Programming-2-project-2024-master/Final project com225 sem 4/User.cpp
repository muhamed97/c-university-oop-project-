#include "User.h"
#include<iostream>
#include<string>
using namespace std;
void User::Register() {

	cout << "Enter your name to register: ";
	while (true) {
		getline(cin, this->username);
		if (!this->username.empty()) {
			break; 
		}
		cout << "Please enter a non-empty name: ";
	}
	cout << "Enter your email address: ";
	while (true) {
		getline(cin, email);
		if (!email.empty()) {
			break; 
		}
		cout << "Please enter a non-empty email address: ";
	}

	cout << "Create your password: ";
	while (true) {
		getline(cin, password);
		if (!password.empty()) {
			break; 
		}
		cout << "Please enter a non-empty password: ";
	}
}




void User::login() {
	string aemail,pass, Regs;
	cout << "Enter your email to log in " << endl;
	cin>>aemail;
	cout << "Enter your password" << endl;
	cin >> pass;


	if(aemail == this->email && pass == password)
	{
		cout << "Welcome " << this->username << " you have logged in succesfully" << endl;
		return;
	}
	

	while(aemail != this->email || pass != this->password)
	{
		cout << "You are not registered, please register first" << endl;
		cout << "If you want to register press R Or Press (any key) to Login Again!! " << endl;
		cin >> Regs;
		if (Regs == "R" || Regs == "r") {
			Register();
			return;
		}
		else {
			login();		// recursive function
			return;
		}
	}
}
void User::logout() {
	string logouts;
	cout << "Dear customer, to logout press L" << endl;
	cin >> logouts;
	if (logouts == "l") {
		login();
	}
}
void User::changePass() {
	string chapass, pass;
	cout << "If you want to change your password Press  C else press any other key " << endl;
	cin >> chapass;
	if (chapass == "C"||chapass=="c") {
		cout << "Enter new password " << endl;
		cin >> pass;
		password = pass;
	}

}
void User::setUserRole(string rol) {
	role = rol;

}
string User::getUserRole() {
	return role;
}
