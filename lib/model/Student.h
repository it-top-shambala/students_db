#pragma once

#include <string>
#include <vector>

#include "Subject.h"

using namespace std;

struct Student {
    string first_name;
    string last_name;
    vector<Subject*> subjects;
};