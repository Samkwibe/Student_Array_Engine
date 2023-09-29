#ifndef SARRAYLIST_H
#define SARRAYLIST_H
#include <string>
using namespace std;

class SArrayList
{
public:
	struct StudentInfo 
	{
		int id;
		string name;
		string phone;
		string address;

	};
	SArrayList(short capacity);
	~SArrayList(); // This will hale me to free mthe momory when they will be something that will be removed in the student info.

	short GetCao() const;
	short GetNumOfItems() const;
	void AddStudentInfo(const StudentInfo& student);
	void UpdateStudentInfo(const StudentInfo& student, unsigned short position);
	void DisplayStudentInfo(unsigned short position) const;

	StudentInfo RetrieveStudentInfo(unsigned short positin) const;
	void PushStudentInfo(unsigned short position);
	void PopStudentInfo(unsigned short position);

private:

	StudentInfo* student_list_;      //Pointer to the array

	short num_entries_;              //number of inserted students

	short current_pos_;              //index of the current position

	short capacity_;                 //Array size, i.e., maximum number of
};

#endif // !SARRAYLIST_H