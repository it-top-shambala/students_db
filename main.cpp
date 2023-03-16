#include <iostream>
#include <vector>


#include "Student.h"
#include "Subject.h"

#include "FileHelper.h"
#include "ConsoleHelper.h"

using namespace std;

int main() {
    vector<Student> students = ImportFromFile("J:\\students_db\\students_db.csv");
    PrintStudents(students);

    return 0;
}