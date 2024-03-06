#include <iostream>
using namespace std;

int main(){
	int numOfCourses;
	double grade, totalPoints=0, totalCredits=0;
	
	cout << "Enter the number of this courses:";
	cin >> numOfCourses;
	
	for (int i=1; i<=numOfCourses; i++){
		int creditHours;
		double gradePoints;
		
		cout << "Enter your credit hours for courses:"<<i<<":";
		cin >> creditHours;
		
		cout << "Enter the grade points of the course:"<<i<<":";
		cin >> gradePoints;
		
		totalPoints += (gradePoints * creditHours);
		
		totalCredits += creditHours;
		
	}
	
	double CGPA = totalPoints / totalCredits;
	cout << "Your CGPA is:" << CGPA << endl;
	
	return 0;
}
