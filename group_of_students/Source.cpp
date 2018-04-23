#include <iostream>
#include "Group_of_students.h"

using namespace std;

int main() {
	GroupOfStudents myList;
	myList.addStudent(1, "LOL", 1);
	myList.showStudents();
	system("pause");
	return 0;
}