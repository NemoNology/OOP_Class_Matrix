#pragma once
#include <iostream>
#include <vector>
#include <exception>
#include <iomanip>


using namespace std;


class Matrix
{

private:

	// ������� � ���� ������� �������� ���� double
	vector<vector<double>> Matr;

	//// ���������� ������� � ���� ������� ���� double
	//vector<double> Matr1D;

public:



	// ��������� ���-�� ����� �������
	void Set_aLines(const unsigned int new_size);


	// ��������� ���-�� �������� �������
	void Set_aRows(const unsigned int new_size);


	// ��������� ���-�� ����� �������
	unsigned int Get_aLines();


	// ��������� ���-�� �������� �������
	unsigned int Get_aRows();


	// ����� ������� �� �������
	void Show_Matrix();


	// ������� ��������� ������ �������
	vector<double> Get_Line(const unsigned int line_number);


	// ������� ��������� ������� �������
	vector<double> Get_Row(const unsigned int row_number);


	// ������� ��������� ������������ ��������
	double Get_element(unsigned int line, unsigned int row);


	// ���������� ������� ����� ���������
	void Fill_Matrix(double value);


	// ���������� ������� ���������� ����������
	void Random_Matrix();


};


