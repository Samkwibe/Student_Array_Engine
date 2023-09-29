#include "SArrayList.h"
#include <iostream>	

using namespace std;
 // Thsi will be the constractore of this Program
SArrayList::SArrayList(short capity)
{
	this->capacity_ = capity; // This will rake the capacity of number of students
	this->num_entries_ = 0;// I will just set this to 0
	this->current_pos_ = -1;
	this->student_list_ = new StudentInfo[capacity_];
}

// The Destructor

SArrayList::~SArrayList() // this will delete the student list and free the memory
{
	delete[] student_list_;
}

// Then This will get the capcity of the list of students
short SArrayList::GetCao() const
{
	return capacity_;
}
// Get the number of items in the list of students
short SArrayList::GetNumOfItems() const {
	return num_entries_;
}
// This will aAdd a student to the list
void SArrayList::AddStudentInfo(const StudentInfo& student) {
    if (num_entries_ < capacity_) {
        student_list_[num_entries_] = student;
        num_entries_++;
    }
    else {
        cout << "The list is full. Cannot add more students." << endl;
    }
}

// so this one will update student information at a specific position
void SArrayList::UpdateStudentInfo(const StudentInfo& student, unsigned short position)
{
    if (position >= 0 && position < num_entries_)
    {
        student_list_[position] = student;
    }
    else {
        cout << "Invalid position. Cannot update student info." << endl;
    }
}

// Thsi one will display the student info at a scecific  position 
void SArrayList::DisplayStudentInfo(unsigned short position) const
{
    if (position >= 0 && position < num_entries_) {
        cout << "Student ID: " << student_list_[position].id << endl;
        cout << "Name: " << student_list_[position].name << endl;
        cout << "Phone: " << student_list_[position].phone << endl;
        cout << "Address: " << student_list_[position].address << endl;
    }
    else {
        cout << "Invalid position. Student not found." << endl;
    }
}

// The this will retrieve the student info in the specific position

SArrayList::StudentInfo SArrayList::RetrieveStudentInfo(unsigned short position) const {
    StudentInfo emptyStudent = { -1, "", "", "" };
    if (position >= 0 && position < num_entries_) {
        return student_list_[position];
    }
    else {
        cout << "Invalid position. Returning empty student info." << endl;
        return emptyStudent;
    }
}

//  Thsi will Push a student down by swapping with the next position
void SArrayList::PushStudentInfo(unsigned short position) {
    if (position >= 0 && position < num_entries_ - 1) {
        std::swap(student_list_[position], student_list_[position + 1]);
    }
    else
    {
        cout << "Invalid position. Cannot push student down." << endl;
    }
}

// Thsi will ake the comed of Popin  a student up by swapping with the previous position
void SArrayList::PopStudentInfo(unsigned short position) {
    if (position > 0 && position < num_entries_) {
        swap(student_list_[position], student_list_[position - 1]);
    }
    else {
        cout << "Invalid position. Cannot pop student up." << endl;
    }
}
