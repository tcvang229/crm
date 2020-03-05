// CRM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cashier.h"
#include "Manager.h"
#include "SalesAssociate.h"
#include "Department.h"
#include <list>
#include <fstream>

int main()
{
	ofstream outputfile("department_lists.txt");
	Department electronicsDept("Electronics Dept.");
	Department clothingDept("Clothing Dept.");
	Department frontDept("Front Dept.");

	// clothing employees 
	Manager jasmin("Jasmin Thao");
	SalesAssociate trevor("Trevor Akins");
	SalesAssociate nancy("Nancy Yang");

	clothingDept.push(jasmin);
	clothingDept.push(trevor);
	clothingDept.push(nancy);

	string deptName = clothingDept.getDeptName();
	outputfile << deptName << endl;

	vector<Employee> list = clothingDept.getList();
	for (int i = 0; i < list.size(); i++) {
		outputfile << list[i].getName() << endl;
	}
	outputfile << endl;

	// electronics employees
	Manager eric("Eric Enum");
	SalesAssociate fred("Fred Franco");

	electronicsDept.push(eric);
	electronicsDept.push(fred);

	deptName = electronicsDept.getDeptName();
	outputfile << deptName << endl;

	list = electronicsDept.getList();
	for (int i = 0; i < list.size(); i++) {
		outputfile << list[i].getName() << endl;
	}
	outputfile << endl;

	// front employees
	Manager vaughn("Vaughn Vang");
	Cashier jaythan("Jaythan Jordan");
	Cashier sophie("Sophie Singer");

	frontDept.push(vaughn);
	frontDept.push(jaythan);
	frontDept.push(sophie);

	deptName = frontDept.getDeptName();
	outputfile << deptName << endl;

	list = frontDept.getList();
	for (int i = 0; i < list.size(); i++) {
		outputfile << list[i].getName() << endl;
	}
	outputfile << endl;
	
	return 0;
}
