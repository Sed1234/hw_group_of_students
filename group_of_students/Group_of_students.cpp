#include "Group_of_students.h"

GroupOfStudents::GroupOfStudents()
{
}


GroupOfStudents::~GroupOfStudents()
{
}
void GroupOfStudents::setGroup(int _group) {
	GroupOfStudents::group = _group;
}
int GroupOfStudents::getGroup() {
	return group;
}

void GroupOfStudents::addStudent(int grade, std::string name,int _group)
{
	students.push_back(Student(grade, name));
	GroupOfStudents::setGroup( _group);
}

void GroupOfStudents::addDuplicateStudent()
{
	students.push_back(students.back());
}

void GroupOfStudents::showStudents()
{
	for (Student s : students ) {
		std::cout << "grade: " << s.getGrade() << ", name: " << s.getName() <<" , group:"<< GroupOfStudents::getGroup() <<std::endl;
	}
}

std::vector<Student> GroupOfStudents::searchStudentsByName(std::string name)
{
	std::vector<Student> result;
	for (Student s : students) {
		if (s.getName() == name) {
			result.push_back(s);
		}
	}
	return result;
}
