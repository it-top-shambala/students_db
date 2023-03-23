#pragma once

#include <vector>

#include "model/Student.h"

struct DB {
    vector<Student*> students;

    vector<Student*> GetAllStudents() {
        return students;
    }
    void InsertStudent(Student* student) {
        students.push_back(student);
    }
    void DeleteStudent(Student* student) {
        //TODO удаление студента из списка
    }
    Student* FindStudent(string last_name) {
        for (Student* student : students) {
            if (student->last_name == last_name) {
                return student;
            }
        }
        return nullptr;
    }
};