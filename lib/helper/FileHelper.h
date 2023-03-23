#pragma once

#include <fstream>
#include <string>

#include "../model/Student.h"
#include "../model/Subject.h"
#include "../Parsing.h"

using namespace std;

vector<Student*> ImportFromFile(string path) {
    vector<Student*> students;

    ifstream file;
    file.open(path);

    string line;
    while (getline(file, line)) {
        students.push_back(StudentParser(line));
    }

    file.close();
    return students;
}