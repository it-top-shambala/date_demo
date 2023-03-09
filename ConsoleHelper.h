#pragma once

#include <iostream>
#include <vector>

#include "date.h"

using namespace std;

void PrintDates(vector<Date> dates, char format) {
    for (auto date : dates) {
        cout << date.ToString(format) << endl;
    }
}