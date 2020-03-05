#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;

class Manager : public Employee{
private:
public:
	Manager(string name) {
		this->setName(name);
		this->setTitle("Manager");
	}
};
