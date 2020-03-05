#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;

class SalesAssociate : public Employee{
private:
public:
	SalesAssociate(string name) {
		this->setName(name);
		this->setTitle("Sales Associate");
	}
};
