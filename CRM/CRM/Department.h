#pragma once
#include <iostream>
#include "Employee.h"
#include "SalesAssociate.h"
#include "Cashier.h"
#include "Manager.h"
#include <vector>

using namespace std;

class Department {
private:
	string deptName;
	vector<Employee> deptList;

public:
	Department(string deptName) {
		this->deptName = deptName;
	}

	string getDeptName() {
		string returnedDeptName = this->deptName;
		return returnedDeptName;
	}

	//void push(Employee *employee) {
	void push(Employee employee) {
		// stack data structure
		this->deptList.push_back(employee);
	}

	vector<Employee> getList() {
	//vector<Employee*> getList() {
		//vector<Employee*> returnedList = this->deptList;
		vector<Employee> returnedList = this->deptList;
		return returnedList;
	}
};
