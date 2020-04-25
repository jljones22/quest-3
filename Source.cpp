#include <iostream>
#include "Fraction.h"
#include "CSV.h"

using namespace std;
//Any functions with "//*" means the code was borrowed and/or modified from this online source
//https://en.cppreference.com/w/cpp/language/operators

int main() {
    CSV file;
    file.setGameFile();
    file.read_CSV();
    file.~CSV();
	return 0;
}