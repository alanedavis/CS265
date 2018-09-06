#!/usr/bin/awk -f 
BEGIN {printf "%s\n","Here are the students grades and averages:"}

#Students and their Grade Averages
{
gradeAvg = ($2+$3+$4+$5+$6)/5;

#Students Letter Grades
if (gradeAvg >= 90 && gradeAvg <=100) letterGrade = "A"; 
else if (gradeAvg >= 80 && gradeAvg < 90) letterGrade = "B";
else if (gradeAvg >= 70 && gradeAvg < 80) letterGrade = "C";
else if (gradeAvg >= 60 && gradeAvg < 70) letterGrade = "D";
else if (gradeAvg < 60) letterGrade = "F";

{print $1, gradeAvg, letterGrade}
}
