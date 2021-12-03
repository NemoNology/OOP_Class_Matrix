#include <iostream>
#include <vector>
#include <exception>
#include <iomanip>
#include "Matrix.h"


using namespace std;

Matrix::Matrix() {


}



// ��������� ���-�� ����� �������
void Matrix::Set_aLines(const unsigned int new_size) {


	if (new_size == 0) {

		throw invalid_argument("������� ������� ��������!");

	}
	else {

		this->Matr.resize(new_size);

	}


}


// ��������� ���-�� �������� �������
void Matrix::Set_aRows(const unsigned int new_size) {


	if (new_size == 0) {

		throw invalid_argument("������� ������� ��������!");

	}
	else {

		for (unsigned short i = 0; i < this->Matr.size(); i++) {

			this->Matr[i].resize(new_size);

		}

	}

}


// ��������� ���-�� ����� �������
unsigned int Matrix::Get_aLines() {

	return this->Matr.size();

};


// ��������� ���-�� �������� �������
unsigned int Matrix::Get_aRows() {

	return this->Matr[0].size();

}


// ����� ������� � �������
void Matrix::Show_Matrix() {

	cout << "Matrix:\n";

	for (unsigned short i = 0; i < this->Get_aLines(); i++) {

		cout << "\t";

		for (unsigned short j = 0; j < this->Get_aRows(); j++) {

			cout << setw(14) << setprecision(8) << this->Matr[i][j];

		}

		cout << "\n";

	}

	cout << "\n";

}


// ������� ��������� ������ �������
vector<double> Matrix::Get_Line(const unsigned int line_number) {

	vector<double> result;							// �������������� ������ - ������������ ������


	if (line_number == 0) {

		throw invalid_argument("������������ ����� ������!");

	}
	else {

		for (unsigned short j = 0; j < this->Get_aRows(); j++) {

			result[j] = this->Matr[line_number - 1][j];

		}

		return result;

	}
}


// ������� ��������� ������� �������
vector<double> Matrix::Get_Row(const unsigned int row_number) {

	vector<double> result;							// �������������� ������ - ������������ �������

	if (row_number == 0) {

		throw invalid_argument("������������ ����� �������!");

	}
	else {

		for (unsigned short i = 0; i < this->Get_aLines(); i++) {

			result[i] = this->Matr[i][row_number - 1];

		}

		return result;

	}

}


// ������� ��������� ������������ ��������
double Matrix::Get_element(unsigned int line, unsigned int row) {

	if ((line == 0) || (row == 0)) {

		throw invalid_argument("������������ ����� ��������!");

	}
	else {

		return this->Matr[line][row];

	}

}


// ���������� ������� ����� ���������
void Matrix::Fill_Matrix(double value) {

	for (unsigned short i = 0; i < this->Get_aLines(); i++) {

		for (unsigned short j = 0; j < this->Get_aRows(); j++) {

			this->Matr[i][j] = value;

		}

	}

}


// ���������� ������� ���������� ����������
void Matrix::Random_Matrix() {

	for (unsigned short i = 0; i < this->Get_aLines(); i++) {

		for (unsigned short j = 0; j < this->Get_aRows(); j++) {

			this->Matr[i][j] = rand() % 200 - 100 * 0.1;

		}

	}

}