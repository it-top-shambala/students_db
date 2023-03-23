#include <iostream>
#include <vector>

#include "lib/model/Subject.h"
#include "lib/model/Student.h"
#include "lib/DB.h"

#include "lib/helper/FileHelper.h"
#include "lib/helper/ConsoleHelper.h"

using namespace std;

int main() {
    DB db;
    db.students = ImportFromFile("J:\\Temp5\\students_db.csv");

    bool exit = false;
    do {
        cout << "+++ Actions +++" << endl;
        cout << "1. Show all" << endl;
        cout << "2. Add" << endl;
        cout << "3. Find" << endl;
        cout << "4. Delete" << endl;
        cout << "0. Exit" << endl;
        char input;
        cin >> input;
        switch (input) {
            case '1': // 1. Show all
                PrintStudents(db.GetAllStudents());
                break;
            case '2': // 2. Add
            {
                string last_name;
                string first_name;
                cout << "Enter last name - ";
                cin >> last_name;
                cout << "Entre first name - ";
                cin >> first_name;

                Student student;
                student.last_name = last_name;
                student.first_name = first_name;

                db.InsertStudent(&student);
            }
                break;
            case '3': // 3. Find
            {
                string last_name;
                cout << "Enter last name - ";
                cin >> last_name;

                auto student = db.FindStudent(last_name);
                if (student == nullptr) {
                    cout << "Not found" << endl;
                } else {
                    PrintStudent(student);
                }
            }
                break;
            case '4': // 4. Delete
                //TODO DeleteStudent()
                break;
            case '0': // 0. Exit
                exit = true;
                break;
        }
    } while (!exit);

    return 0;
}