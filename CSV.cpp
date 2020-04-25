#include <iostream>
#include <string>
#include <fstream>
#include "CSV.h"

std::ifstream fin;

void CSV::setGameFile() {
	std::cout << "Input the .csv directory: ";
	std::cin >> this->gameFile;
    CSV(gameFile);
}

void CSV::read_CSV() {
    if (fin.is_open()) {
        Fraction f1, f2;
        char op;
        while(fin.good()) {
            fin >> f1 >> op >> f2;
            switch (op) {
            case '+':
                std::cout << f1 + f2;
                break;
            case '-':
                std::cout << f1 - f2;
                break;
            case '*':
                std::cout << f1 * f2;
                break;
            case '/':
                std::cout << f1 / f2;
                break;
            }
        }
    }
    else {
        std::cerr << "Error opening file";
    }
}

CSV::CSV() {}

CSV::CSV(const std::string& gameFile) {
	fin.open(gameFile);
}

/* CSV::CSV(const CSV& C) { //?

}

CSV& CSV::operator=(const CSV& C) { //?
	// TODO: insert return statement here
}

CSV::CSV(CSV&& C) { //?

}

CSV& CSV::operator=(CSV&& C) { //?
	// TODO: insert return statement here
} */

CSV::~CSV() {
	fin.close();
}
