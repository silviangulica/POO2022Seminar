#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
// -> Am folosit "double" pentru a scapa de warnings.
// -> Media se schimba automat la modificarea unei valori a notelor.
//

class Student
{
private:
	char Nume[60];
	double Nota_Engleza;
	double Nota_Matematica;
	double Nota_Istorie;
	double Nota_Medie;

	bool CheckGrades(double Grade_Value);
	void ChangeAverageGrade();

public:
	// -> The Constructors
	Student();
	Student(const char* Nume, double Nota_Engleza, double Nota_Istorie, double Nota_Matematica);

	// -> The Set Methods
	void SetStudentName(const char* Nume);
	void SetMathGrade(double Grade_Value);
	void SetEnglishGrade(double Grade_Value);
	void SetHistoryGrade(double Grade_Value);

	// -> The Get Methods
	double GetMathGrade();
	double GetEnglishGrade();
	double GetHistoryGrade();
	char* GetStudentName();
	float GetAverageGrade();
};

