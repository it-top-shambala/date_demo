#pragma once

#include <string>

#include "Parser.h"

using namespace std;

// dd.mm.yyyy

struct Date {
    int year;
    int month;
    int day;

    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    Date(string date, char format) {
        switch (format) {
            case 'M': // dd.mm.yyyy
            {
                auto result = ParsingDate(date);
                this->day = stoi(result[0]);
                this->month = stoi(result[1]);
                this->year = stoi(result[2]);
            }
                break;
            case 'S': // yyyy.mm.dd
            {
                auto result = ParsingDate(date);
                this->year = stoi(result[0]);
                this->month = stoi(result[1]);
                this->day = stoi(result[2]);
            }
                break;
        }
    }

    string ToString() { // dd.mm.yyyy
        return to_string(day) + "." + to_string(month) + "." + to_string(year);
    }
    string ToString(char format) {
        switch (format) {
            case 'M': // dd.mm.yyyy
                return to_string(day) + "." + to_string(month) + "." + to_string(year);
            case 'S': // yyyy.mm.dd
                return to_string(year) + "." + to_string(month) + "." + to_string(day);
        }
    }
};
