#ifndef STRUCT_H
#define STRUCT_H

// ��� ��� �����? ��� ���-������ ������???
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

	// ����� ��������� ��������� ������
	void edit_sulary(double new_salary);
};



struct Vector_report
{
	vector<MillingMachine> v;


	void print_allsalary();
	//��� �������� ������������ ������������
	void print_best();
	//����� ����� �������� ������ �� ����
	void GeneralSalary();
	//��� �����������, ���������� � ���������� ���������.
	void PrintNameWith();

};

#endif STRUCT_H
