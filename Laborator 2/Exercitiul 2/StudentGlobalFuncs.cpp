#include "StudentGlobalFuncs.h"

// -> The Grade Comparison Funcs
int CompareMathGrade(Student* First, Student* Second)
{
	if (First->GetMathGrade() == Second->GetMathGrade()) return 0;
	else return (First->GetMathGrade() > Second->GetMathGrade()) ? 1 : -1;
}
int CompareEnglishGrade(Student* First, Student* Second)
{
	if (First->GetEnglishGrade() == Second->GetEnglishGrade()) return 0;
	else return (First->GetEnglishGrade() > Second->GetEnglishGrade()) ? 1 : -1;
}
int CompareHistoryGrade(Student* First, Student* Second)
{
	if (First->GetHistoryGrade() == Second->GetHistoryGrade()) return 0;
	else return (First->GetHistoryGrade() > Second->GetHistoryGrade()) ? 1 : -1;
}
int CompareAverageGrade(Student* First, Student* Second)
{
	if (First->GetAverageGrade() == Second->GetAverageGrade()) return 0;
	else return (First->GetAverageGrade() > Second->GetAverageGrade()) ? 1 : -1;
}

// -> The Name Comparison Funcs
int CompareStudentName(Student* First, Student* Second)
{
	char Name_First[60], Name_Second[60], cFirst = ' ', cSecond = ' ';
	strcpy_s(Name_First, First->GetStudentName());
	strcpy_s(Name_Second, Second->GetStudentName());
	int Size_First = (int)strlen(Name_First);
	int Size_Second = (int)strlen(Name_Second);

	// -> Compare on lenght first, and then if they are equal, compare on alphabetical order
	if (Size_First == Size_Second)
	{
		for (int i = 0; i < Size_Second; i++)
		{
			if (Name_First[i] != Name_Second[i])
			{
				cFirst = Name_First[i];
				cSecond = Name_Second[i];
				break;
			}
		}
		if (cFirst == ' ') return 0;
		return (cFirst < cSecond) ? 1 : -1;
	}
	else return (Size_First > Size_Second) ? 1 : -1;
}