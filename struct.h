#ifndef STRUCT_H
#define STRUCT_H

// Что это такое? Мне кто-нибудь скажет???
#include <vector>
#include <string>
#include <cstdlib>
#include <iostream>


using namespace std;

struct  MillingMachine
{
	string Name;
	double Salary;
	
	double CuttingMeter;
	double Time;
	bool flag;

	double GetProduct();

	double GetPay();

 

	void establFlag(bool flag);

	// метод изменения месячного оклада
	void edit_sulary(double new_salary);
};



struct Vector_report
{
	vector<MillingMachine> v;


	void print_allsalary();
	//ФИО наиболее эффективного фрезеровщика
	void print_best();
	//общая сумма месячных выплат по цеху
	void GeneralSalary();
	//ФИО сотрудников, работающих с ускоренным шпинделем.
	void PrintNameWith();

};

#endif STRUCT_H
