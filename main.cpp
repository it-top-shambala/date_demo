#include <iostream>

#include "date.h"
#include "FileHelper.h"
#include "ConsoleHelper.h"

using namespace std;

int main() {
    auto dates = ImportDatesFromFile("dates.dat", 'M');
    PrintDates(dates, 'M');

    return 0;
}
