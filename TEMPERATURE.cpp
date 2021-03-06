#include "pch.h"
#include <iostream>
#include<fstream>
using namespace std;

double sum(double *A, int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum / size;
}


int main()
{
	ifstream f("D:\\10.txt");
	double A[817][46];

	for (int i = 0; i < 817; i++) {
		for (int j = 0; j < 46; j++) {
			f >> A[i][j];
		}
	}


	double Temp[50];
	double TEMPERATURE[24][39];

	int time = 0, size = 0, t = 0, v = 0;
	for (int time = 0; time < 24; time++) {
		for (int i = 7; i < 46; i++) {
			for (int p = t; time == A[p][3]; p++) {
				Temp[p - t] = A[p - t][i];
				size++;
			}
			if (size > v)
				v = size;
			TEMPERATURE[time][i - 7] = sum(Temp, size);
			size = 0;
		}
		t += v;
		v = 0;
	}

	
	ofstream out("D:\\TEMPERATURE.txt");
	
	
	for (int i = 0; i < 24; i++) {
		for (int j = 0; j < 44; j++) {
			if (j == 0)
				out << "19 , ";
			else if (j == 1)
				out << "05 , ";
			else if (j == 2)
				out << "01 , ";
			else if (j == 3)
				out << i << " , ";
			else if (j == 4)
				out << "0 , ";
			else if(j == 43)
				out << TEMPERATURE[i][j - 5] << ". ";
			else
				out << TEMPERATURE[i][j - 5] << " , ";
		}
		out << endl << endl;
	}
	out.close();
	return 0;
}