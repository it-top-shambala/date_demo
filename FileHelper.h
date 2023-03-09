#pragma once

#include <fstream>
#include <vector>

#include "date.h"

using namespace std;

void ExportDateToFile(string path, Date date, char format) {
    ofstream file;
    file.open(path, ios::app);
    file << date.ToString(format) << endl;
    file.close();
}

void ExportDatesToFile(string path, vector<Date> dates, char format) {
    for (auto date : dates) {
        ExportDateToFile(path, date, format);
    }
}

Date ImportDateFromFile(string path, char format) {
    ifstream file;
    file.open(path);
    string str;
    getline(file, str);
    Date date(str, format);
    file.close();
    return date;
}

vector<Date> ImportDatesFromFile(string path, char format) {
    vector<Date> result;
    ifstream file;
    file.open(path);
    string str;
    while (getline(file, str)) {
        Date date(str, format);
        result.push_back(date);
    }
    file.close();
    return result;
}