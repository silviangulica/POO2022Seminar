#include "Student.h"

// -> Private Methods
bool Student::CheckGrades(double Grade_Value)
{
	if (Grade_Value > 10 || Grade_Value <= 0) return false;
	return true;
}
void Student::ChangeAverageGrade()
{
	this->Nota_Medie = (this->Nota_Engleza + this->Nota_Istorie + this->Nota_Matematica) / 3;
	double round = (int)(this->Nota_Medie * 100 + 0.5);
	this->Nota_Medie = (double)(round / 100);
}

// -> Constructors
Student::Student()
{
	strcpy_s(Nume, "Anonim");
	this->Nota_Engleza = 0;
	this->Nota_Istorie = 0;
	this->Nota_Matematica = 0;
	this->Nota_Medie = 0;
}
Student::Student(const char* Nume, double Nota_Engleza, double Nota_Istorie, double Nota_Matematica)
{
	strcpy_s(this->Nume, Nume);
	this->Nota_Engleza = Nota_Engleza;
	this->Nota_Istorie = Nota_Istorie;
	this->Nota_Matematica = Nota_Matematica;
	this->ChangeAverageGrade();
}

// -> The Get Methods
float Student::GetAverageGrade()
{
	return this->Nota_Medie;
}
char* Student::GetStudentName()
{
	return this->Nume;
}
double Student::GetMathGrade()
{
	return this->Nota_Matematica;
}
double Student::GetEnglishGrade()
{
	return this->Nota_Engleza;
}
double Student::GetHistoryGrade()
{
	return this->Nota_Istorie;
}

// -> The Set Methods
void Student::SetStudentName(const char* Nume)
{
	strcpy_s(this->Nume, Nume);
}
void Student::SetMathGrade(double Grade_Value)
{
	if (!CheckGrades(Grade_Value))
	{
		printf("\n!-> Incorrect grade at math [%0.2f], for student %s.\n\n", Grade_Value, this->Nume);
		return;
	}
	this->Nota_Matematica = Grade_Value;
	this->ChangeAverageGrade();
}
void Student::SetEnglishGrade(double Grade_Value)
{
	if (!CheckGrades(Grade_Value))
	{
		printf("\n!-> Incorrect grade at english [%0.2f], for student %s.\n\n", Grade_Value, this->Nume);
		return;
	}
	this->Nota_Engleza = Grade_Value;
	this->ChangeAverageGrade();
}
void Student::SetHistoryGrade(double Grade_Value)
{
	if (!CheckGrades(Grade_Value))
	{
		printf("\n!-> Incorrect grade at history [%0.2f], for student %s.\n\n", Grade_Value, this->Nume);
		return;
	}
	this->Nota_Istorie = Grade_Value;
	this->ChangeAverageGrade();
}