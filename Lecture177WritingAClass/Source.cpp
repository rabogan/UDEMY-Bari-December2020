#include "Header.h"

class Student {
private:
	int roll_number;
	string name;
	int mark1;
	int mark2;
	int mark3;
public:
	Student();
	Student(int rollin, string namae, int marka, int markb, int markc);
	int getRollNumber() { return roll_number; }
	string getName() { return name; }
	int getMark1() { return mark1; }
	int getMark2() { return mark2; }
	int getMark3() { return mark3; }
	void setRollNumber(int rollin);
	void setName(string namae);
	void setMark1(int marka);
	void setMark2(int markb);
	void setMark3(int markc);
	int total_marks();
	char grade();
};

int main() {
	cout << "Please enter the roll number of the student:" << endl;
	int rollin;
	cin >> rollin;
	cout << "Please enter the name of the student:" << endl;
	string namae;
	cin >> namae;
	cout << "Please enter the marks (out of 100) for the three subjects:" << endl;
	int marka, markb, markc;
	cin >> marka >> markb >> markc;
	Student s1(rollin, namae, marka, markb, markc);
	cout << "Student name: " << s1.getName() << endl;
	cout << "Student number: " << s1.getRollNumber() << endl;
	cout << "Raw score: " << s1.total_marks() << endl;
	cout << "Grade: " << s1.grade() << endl;
	
}

Student::Student()
{
	roll_number = 1;
	name = "Schteve";
	mark1 = 1;
	mark2 = 1;
	mark3 = 1;
}

Student::Student(int rollin, string namae, int marka, int markb, int markc)
{
	roll_number = rollin;
	name = namae;
	if (marka <= 100 && marka >= 0)
		mark1 = marka;
	else
		mark1 = 1;
	if (markb <= 100 && markb >= 0)
		mark2 = markb;
	else
		mark2 = 1;
	if (markc <= 100 && markc >= 0)
		mark3 = markc;
	else
		mark3 = 1;
}

void Student::setRollNumber(int rollin)
{
	roll_number = rollin;
}

void Student::setName(string namae)
{
	name = namae;
}

void Student::setMark1(int marka)
{
	mark1 = marka;
}

void Student::setMark2(int markb)
{
	mark2 = markb;
}

void Student::setMark3(int markc)
{
	mark3 = markc;
}

int Student::total_marks() {
	return mark1 + mark2 + mark3;
}

char Student::grade() {
	if (((mark1 + mark2 + mark3) / 3) >= 70)
		return 'A';
	else if (((mark1 + mark2 + mark3) / 3) >= 60)
		return 'B';
	else if (((mark1 + mark2 + mark3) / 3) >= 50)
		return 'C';
	else if (((mark1 + mark2 + mark3) / 3) >= 40)
		return 'D';
	else
		return 'F';
}