#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;

class Cashier : public Employee{
private:
public:
	Cashier(string name) {
		this->setName(name);
		this->setTitle("Cashier");
	}
};
