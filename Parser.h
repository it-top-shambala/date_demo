#pragma once

#include <string>
#include <vector>

using namespace std;

string Parsing(string& str, char delimiter) {
    int pos = str.find(delimiter);
    string result = str.substr(0, pos);
    str = str.substr(pos + 1);
    return result;
}

vector<string> ParsingDate(string date) {
    vector<string> result;

    result.push_back(Parsing(date, '.'));
    result.push_back(Parsing(date, '.'));
    result.push_back(date);

    return result;
}