#pragma once
#include <iostream>

using namespace std;

class Employee {
private:
	string crm = "CRM Employee";
	string name;
	string title;

public:
	string getName() {
		string returnedName = this->name;
		return returnedName;
	}

	string getTitle() {
		string returnedTitle = this->title;
		return returnedTitle;
	}

	void setName(string name) {
		this->name = name;
	}

	void setTitle(string title) {
		this->title = title;
	}

	void sayHi() {
		std::cout << "Hello there! Welcome to CRM.";
	}

	void doWork() {
		std::cout << "...doing work...";
	}
};
