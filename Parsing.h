#pragma once

#include <string>

#include "Student.h"
#include "Subject.h"

using namespace std;

string Parsing(string& str, char delimiter) {
    int pos = str.find(delimiter);
    string temp = str.substr(0, pos);
    str = str.substr(pos + 1);
    return temp;
}

int MarkParser(string& str) {
    int mark;
    string temp = Parsing(str, '.');
    mark = stoi(temp);
    return mark;
}

vector<int> MarksParser(string str) {
    vector<int> marks;
    do {
        marks.push_back(MarkParser(str));
    } while (str != "");

    return marks;
}

Subject SubjectParser(string str) {
    Subject subject;

    string subject_name = Parsing(str, ',');

    subject.name = subject_name;
    subject.marks = MarksParser(str);

    return subject;
}

vector<Subject> SubjectsParser(string str) {
    vector<Subject> subjects;
    do {
        string temp = Parsing(str, ';');
        subjects.push_back(SubjectParser(temp));
    } while (str != "");

    return subjects;
}

Student StudentParser(string str) {
    Student student;
    string last_name = Parsing(str, '|');
    string first_name = Parsing(str, '|');
    student.last_name = last_name;
    student.first_name = first_name;
    student.subjects = SubjectsParser(str);
    return student;
}
