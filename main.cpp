#include <iostream>
#include <vector>

#include "FileHelper.h"
#include "Student.h"
#include "Subject.h"

using namespace std;

int main() {
    vector<Student> students = ImportFromFile("J:\\students_db\\students_db.csv");
    for (Student student : students) {
        cout << student.last_name << " " << student.first_name << " : " << endl;
        for (Subject subject : student.subjects) {
            cout << "\t" << subject.name << " : ";
            for (int mark : subject.marks) {
                cout << mark << " ";
            }
            cout << endl;
        }
    }

    return 0;
}