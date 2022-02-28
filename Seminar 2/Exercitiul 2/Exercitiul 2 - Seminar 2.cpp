#include <stdlib.h>
#include <stdio.h>
#include "Student.h"
#include "StudentGlobalFuncs.h"

// 
// -> Functiile din acest MAIN sunt doar pentru testare.
//

void ShowInfo(Student *s)
{
	printf("| %s | \tNota Matematica: %0.2f | Nota Istorie: %0.2f | Nota Engleza: %0.2f | Nota Medie: %0.2f |\n", s->GetStudentName(), s->GetMathGrade(), s->GetHistoryGrade(), s->GetEnglishGrade(), s->GetAverageGrade());
	printf("--------------------------------------------------------------------------------------------------------\n");
}



int main()
{
	Student s("AAAA", 10, 10, 4.12);
	Student c, a;
	ShowInfo(&s);
	

	// -> Pentru Ionel Aguret [c]
	c.SetStudentName("AAAAB");
	c.SetEnglishGrade(10);
	c.SetHistoryGrade(4.1);
	c.SetMathGrade(8.88);
	ShowInfo(&c);

	// -> Pentru Balista Malista [a]
	a.SetStudentName("Gulica Silvian");
	a.SetEnglishGrade(5);
	a.SetHistoryGrade(8.42);
	a.SetMathGrade(9.91);
	ShowInfo(&a);


	
	printf("Coeficientul compararii la Notele de Matematica dintre \"%s\" si \"%s\" : %d.\n", s.GetStudentName(), c.GetStudentName(), CompareMathGrade(&s, &c));

	printf("Coeficientul compararii la Notele de Istorie dintre \"%s\" si \"%s\" : %d.\n", s.GetStudentName(), c.GetStudentName(), CompareHistoryGrade(&s, &c));

	printf("Coeficientul compararii la Notele de Engleza dintre \"%s\" si \"%s\" : %d.\n", s.GetStudentName(), c.GetStudentName(), CompareEnglishGrade(&s, &c));

	printf("Coeficientul compararii la Media Notelor dintre \"%s\" si \"%s\" : %d.\n", s.GetStudentName(), c.GetStudentName(), CompareAverageGrade(&s, &c));

	printf("Coeficientul compararii la Nume dintre \"%s\" si \"%s\" : %d.\n", s.GetStudentName(), c.GetStudentName(), CompareStudentName(&s, &c));
	

	// -> Verificare pentru valori incorecte Grades
	a.SetHistoryGrade(11);
	s.SetEnglishGrade(11);
	c.SetMathGrade(11);

	return 0;
}