#include "PrinterBase.h"
#include <iostream>
#include <string>
using std::cout;
using std::to_string;

void PrinterBase::resetColor() const {
	cout << "\033[0m";
}

void PrinterBase::setTextColor(TextColor color) const {
	cout << "\033[" + to_string((int)color) + "m";
	// light variations:
	// red 91, yellow 93, green 92, cyan 96, blue 94, magenta 95, black 90
}
