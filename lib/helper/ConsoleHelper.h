#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "../model/Student.h"
#include "../model/Subject.h"

void PrintSubject(Subject* subject) {
    cout << "\t" << subject->name << " : ";
    for (int mark : subject->marks) {
        cout << mark << " ";
    }
    cout << endl;
}

void PrintSubjects(vector<Subject*> subjects) {
    for (Subject* subject : subjects) {
        PrintSubject(subject);
    }
}

void PrintStudent(Student* student) {
    cout << student->last_name << " " << student->first_name << " : " << endl;
    PrintSubjects(student->subjects);
}

void PrintStudents(vector<Student*> students) {
    for (Student* student : students) {
        PrintStudent(student);
    }
}