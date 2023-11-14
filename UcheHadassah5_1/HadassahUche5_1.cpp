/*Write a program that reads the grades (integers) of 4 exams per students in a class 
of 3 students, and outputs the following statistics: a) the lowest grade b) the highest 
grade and c) the average grade of each student. You should also output the table of 
grades entered. 
Example output:
Student 0 77 68 86 73
Student 1 96 87 89 78
Student 2 70 90 86 81
Lowest grade: 68
Highest grade: 96
The average grade of student 0 is 76.00
The average grade of student 1 is 87.50
The average grade of student 1 is 81.75*/
#include<iostream>
using namespace std;
int main()
{
	int grade[3][4] = { 77,68,86,73,96,87,89,78,70,90,86,81 };
	int lowest = grade[0][0];
	int highest = grade[0][0];
	double sum[] = { 0.0,0.0,0.0 };
	for (int i = 0; i < 3; i++)
	{
		cout << "\nStudent " << i << " ";
		for (int j = 0; j < 4; j++)
		{
			sum[i] += grade[i][j];
			cout << grade[i][j] << " ";
			if (grade[i][j] < lowest)
			{
				lowest = grade[i][j];
			}
			else if (grade[i][j] > highest)
			{
				highest = grade[i][j];
			}
		}
	}
	cout << "\nLowest Grade: " << lowest;
	cout << "\nHighest Grade: " << highest;
	for(int k = 0;k<3;k++)
	{
		double avg = sum[k] / 4;
		cout << "\nThe average grade of student " << k << " is " << avg;
	}
}