
// Auther: Samuel Kwibe
// ID #: 2278332
// Class:CS217 - Object Oriented Programmin
// Professor:Dr. Ayman Eldeib
// Date: 09/27/2023
// Time: 11:20 PM 

#include <iostream>	
#include "SArrayList.h"
#include <string>

using namespace std;


int main() {

    cout << " Welcome to SNHU Student Array Engine program! " << endl;
    // This Ask the user to enter the capacity of the list 

    short capacity;

    cout << " Please enter the maximum number of students: ";

    cin >> capacity;

    SArrayList studentList(capacity);

    // This is the menu that will be desplay for the user and ask them to input the student information

    int choice; // the user will have to pick one of the following

    do {

        cout << "\nMenu:\n";

        cout << "1. Add Student\n";

        cout << "2. Update Student Info\n";

        cout << "3. Display Student Info\n";

        cout << "4. Retrieve Student Info\n";

        cout << "5. Push Student Down\n";

        cout << "6. Pop Student Up\n";

        cout << "7. Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;



        switch (choice) {

        case 1: {
             // This will add a new student
            SArrayList::StudentInfo newStudent;

            cout << "Enter Student ID: ";

            cin >> newStudent.id;

            cout << "Enter Name: ";

            cin.ignore(); // Clear newline character from previous input 

            getline(cin, newStudent.name);

            cout << "Enter Phone: ";

            cin.ignore();

            getline(cin, newStudent.phone);

            cout << "Enter Address: ";

            cin.ignore();

            getline(cin, newStudent.address);



            studentList.AddStudentInfo(newStudent);

            cout << "Student added successfully." << endl;

            break;

        }

        case 2: {

            unsigned short position;

            cout << "Enter the position of the student to update: ";

            cin >> position;

            // Thsis will hold the information when the user want to update some student info

            SArrayList::StudentInfo updatedStudent;

            cout << "Enter updated Student ID: ";

            cin >> updatedStudent.id;

            cout << "Enter updated Name: ";

            cin.ignore();

            getline(cin, updatedStudent.name);

            cout << "Enter updated Phone: ";

            cin.ignore();

            getline(cin, updatedStudent.phone);

            cout << "Enter updated Address: ";

            cin.ignore();

            getline(cin, updatedStudent.address);



            studentList.UpdateStudentInfo(updatedStudent, position);

            cout << "Student info updated successfully." << endl;

            break;

        }

        case 3: {

            unsigned short position;

            cout << "Enter the position of the student to display: ";

            cin >> position;

            studentList.DisplayStudentInfo(position);

            break;

        }

        case 4: {

            unsigned short position;

            cout << "Enter the position of the student to retrieve: ";

            cin >> position;

            SArrayList::StudentInfo retrievedStudent = studentList.RetrieveStudentInfo(position);

            if (retrievedStudent.id != -1) {

                cout << "Retrieved Student Info:" << endl;

                cout << "Student ID: " << retrievedStudent.id << endl;

                cout << "Name: " << retrievedStudent.name << endl;

                cout << "Phone: " << retrievedStudent.phone << endl;

                cout << "Address: " << retrievedStudent.address << endl;

            }
            else {

                cout << "Invalid position. Student not found." << endl;

            }

            break;

        }

        case 5: {

            unsigned short position;

            cout << "Enter the position of the student to push down: ";

            cin >> position;

            studentList.PushStudentInfo(position);

            cout << "Student pushed down successfully." << endl;

            break;

        }

        case 6: {

            unsigned short position;

            cout << "Enter the position of the student to pop up: ";

            cin >> position;

            studentList.PopStudentInfo(position);

            cout << "Student popped up successfully." << endl;

            break;
        }

        case 7:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        //  this will implement other menu options

    } while (choice != 7); // the while loop will start back from the begining



    return 0;

}
























