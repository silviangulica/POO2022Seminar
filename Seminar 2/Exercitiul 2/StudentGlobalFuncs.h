#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student.h"

// -> The Grade Comparison
int CompareMathGrade(Student* First, Student* Second);
int CompareEnglishGrade(Student* First, Student* Second);
int CompareHistoryGrade(Student* First, Student* Second);
int CompareAverageGrade(Student* First, Student* Second);

// -> The Name Comparison
int CompareStudentName(Student* First, Student* Second);